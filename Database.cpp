#include "Database.h"

Database::Database(const string& address, const string& database, const string& user, const string& pass) 
{
	this->resultSpaces = vector<short>(100);
	this->tableMaxIDs = map<string, int>();
	this->tableColumnNames = map<string, vector<string>>();

	this->address = address;
	this->user = user;
	this->pass = pass;
	this->database = database;

	this->clearExecutionVariables();
	this->initializeConnection();
	this->initializeCreatureMoods();
	this->initializeImplementationTables();
	this->setDatabase(database);
	this->retrieveTableNames();
	this->retrieveTableColumnNames();
	this->retrieveTableMaxIDs();
}

Database::~Database() 
{
	this->connection->close();
	this->statement->close();
	this->results->close();

	delete driver;
	delete connection;
	delete statement;
	delete results;
	//delete meta;
	delete err;
}

void Database::initializeConnection() 
{
	this->driver = sql::mysql::get_mysql_driver_instance();
	this->connection = driver->connect(address, user, pass);
}

void Database::initializeCreatureMoods()
{
	this->moods.push_back("ANGRY");
	this->moods.push_back("AGITATED");
	this->moods.push_back("FINE");
	this->moods.push_back("HAPPY");
	this->moods.push_back("ECSTATIC");
}

void Database::initializeImplementationTables()
{
	this->implementationTables.push_back("Creature");
	this->implementationTables.push_back("Door");
	this->implementationTables.push_back("Tile");
	this->implementationTables.push_back("Trap");
}

bool Database::setDatabase(const string &name) 
{
	string cmd = "USE " + name;
	bool outcome;

	outcome = this->execute(cmd);
	if (outcome) 
		this->database = name;

	return outcome;
}

bool Database::execute(const string& command) 
{
	this->clearExecutionVariables();

	try {
		this->statement = connection->createStatement();
		this->statement->execute(command);
		return true;
	}
	catch (SQLException &e) {
		this->err = &e;
		this->printErr();
	}

	return false;
}

bool Database::update(const string &command) 
{
	this->clearExecutionVariables();

	try {
		this->statement = connection->createStatement();
		this->statement->executeUpdate(command);
		return true;
	}
	catch (SQLException &e) {
		this->err = &e;
		this->printErr();
	}

	return false;
}

void Database::query(const string& command) 
{
	this->clearExecutionVariables();

	try {
		this->statement = connection->createStatement();
		this->results = statement->executeQuery(command);
		this->meta = results->getMetaData();
		this->clearColumnDataLengths();
		this->calculateColumnDataLengths();
	}
	catch (SQLException &e) {
		this->err = &e;
		this->printErr();
	}
}

void Database::clearExecutionVariables() 
{
	this->statement = nullptr;
	this->results = nullptr;
	this->meta = nullptr;
	this->err = nullptr;
	this->data = nullptr;
}

void Database::clearColumnDataLengths() 
{
	fill(resultSpaces.begin(), resultSpaces.end(), 0);
}

void Database::calculateColumnDataLengths() 
{
	unsigned int columns = meta->getColumnCount() + 1;
	results->beforeFirst();
	string current;

	while (results->next()) 
	{
		for (unsigned int i = 1; i < columns; i++) 
		{
			current = results->getString(i);

			if (current != "") 
			{
				int currentLength = current.length();
				if (currentLength > resultSpaces.at(i))
					resultSpaces.at(i) = currentLength;
			}
		}
	}

	for (unsigned int i = 1; i < columns; i++) 
	{
		current = meta->getColumnName(i);

		if (current != "") 
		{
			int currentLength = current.length();
			if (currentLength > resultSpaces.at(i))
				resultSpaces.at(i) = currentLength;
		}
	}

	for (unsigned int i = 1; i < columns; i++)
	{
		resultSpaces.at(i) += 2;
	}
}

void Database::retrieveTableNames() 
{
	this->query("SHOW TABLES");

	vector<vector<string>> data = this->getData(false);
	vector<string> tables;
	unsigned int columns = meta->getColumnCount() + 1;
	unsigned int dataSize = data.size();
	unsigned int rowSize;

	for (unsigned int i = 0; i < dataSize; i++) 
	{
		rowSize = data.at(i).size();
		for (unsigned int j = 0; j < rowSize; j++)
			tables.push_back(data.at(i).at(j));
	}

	this->tables = tables;
}

void Database::retrieveTableColumnNames()
{

}

void Database::retrieveTableMaxIDs() 
{
	vector<vector<string>> data;
	unsigned int tablesLength = this->tables.size();
	string command;
	string table;
	string tableID;
	string tableMaxID;

	for (unsigned int i = 0; i < tablesLength; i++) 
	{
		table = tables.at(i);

		tableID = table;
		tableID.at(0) = tolower(tableID.at(0));
		tableID.append("ID");

		command = "SELECT max(" + tableID + ") FROM " + table;
		this->query(command);

		data = this->getData(false);

		tableMaxID = data.at(0).at(0);

		if (tableMaxID == "")
			tableMaxID = "0";

		this->tableMaxIDs[table] = stoi(tableMaxID);
	}
}

int Database::getTableMaxID(const string& table) {
	return this->tableMaxIDs[table];
}

bool Database::hasTable(const string& table) 
{
	unsigned int tablesLength = this->tables.size();

	for (unsigned int i = 0; i < tablesLength; i++) 
	{
		if (table == tables.at(i))
			return true;
	}

	return false;
}

string& Database::addSpaces(string& appended, const short& numberOfSpaces) 
{
	if (numberOfSpaces <= 0) {
		//no operation
	}
	else {
		for (unsigned short i = 0; i < numberOfSpaces; i++) {
			appended.append(" ");
		}
	}
	return appended;
}

vector<short> Database::getResultSpaces()
{
	return this->resultSpaces;
}

SQLException Database::getErr() 
{
	return *this->err;
}

vector<vector<string>>& Database::getHeaders(const bool& hasFormatting) 
{
	this->data = new vector<vector<string>>(0);

	if (this->results == nullptr) 
	{
		//no operation
	}
	else 
	{
		unsigned int columns = meta->getColumnCount() + 1;
		vector<string> columnNames;

		for (unsigned int i = 1; i < columns; i++) 
		{
			string current = meta->getColumnName(i);

			if (hasFormatting) 
			{
				int numSpaces = resultSpaces.at(i) - current.length();
				current = this->addSpaces(current, numSpaces);
			}

			columnNames.push_back(current);
		}
		this->data->push_back(columnNames);
	}

	return *data;
}

vector<vector<string>>& Database::getData(const bool& hasFormatting) 
{
	this->data = new vector<vector<string>>(0);

	if (this->results == nullptr)
	{
		//no operation
	}
	else
	{
		unsigned int columns = meta->getColumnCount() + 1;
		vector<string> row;

		this->results->beforeFirst();

		while (results->next()) 
		{
			row = vector<string>();

			for (unsigned int i = 1; i < columns; i++) 
			{
				string current = results->getString(i);

				if (hasFormatting) 
				{
					int numSpaces = resultSpaces.at(i) - current.length();
					current = this->addSpaces(current, numSpaces);
				}

				row.push_back(current);
			}
			this->data->push_back(row);
		}
	}
	return *data;
}

vector<vector<string>>& Database::getHeadersAndData(const bool& hasFormatting) 
{
	this->data = &getHeaders(hasFormatting);

	if (this->results == nullptr) 
	{
		//no operation
	}
	else 
	{
		unsigned int columns = meta->getColumnCount() + 1;
		vector<string> row;

		this->results->beforeFirst();

		while (results->next()) 
		{
			row = vector<string>();
			for (unsigned int i = 1; i < columns; i++) 
			{
				string current = results->getString(i);
				if (hasFormatting)
				{
					int numSpaces = resultSpaces.at(i) - current.length();
					current = this->addSpaces(current, numSpaces);
				}

				row.push_back(current);
			}
			this->data->push_back(row);
		}
	}
	return *data;
}

bool Database::hasErr()
{
	bool hasErr = true;
	if (this->err == nullptr)
		hasErr = false;

	return hasErr;
}

bool Database::hasData() 
{
	return this->results != nullptr && this->results->rowsCount() > 0;
}

unsigned short Database::login(const string username, const string password) 
{
	string command = "SELECT password, type FROM User WHERE username='" + username + "'";
	string userPassword;
	string userType;

	this->query(command);

	if (this->hasData()) 
	{
		vector<vector<string>> data = this->getData(false);
		userPassword = data.at(0).at(0);
		userType = data.at(0).at(1);

		if (userPassword == password) 
		{
			if (userType == "1")
				return 1;
			else if (userType == "2")
				return 2;
		}
	}

	return 0;
}

void Database::printHeaders() 
{
	vector<vector<string>> data = this->getHeaders(true);
	unsigned int rowLength = data.at(0).size();
	string current;
	int numSpaces;

	for (unsigned int i = 0; i < rowLength; i++) 
	{
		current = data.at(0).at(i);
		cout << current;
	}
	cout << "\n";
}

void Database::printData() 
{
	if (this->hasData()) 
	{
		vector<vector<string>> data = this->getData(true);
		unsigned int dataLength = data.size();
		unsigned int rowLength;
		string current;
		int numSpaces;

		for (unsigned int i = 0; i < dataLength; i++) 
		{
			rowLength = data.at(i).size();
			for (unsigned int j = 0; j < rowLength; j++) 
			{
				current = data.at(i).at(j);
				cout << current;
			}
			cout << "\n";
		}
		cout << "\n";
	}
	else
		cout << "There are no results to display.\n";
}

void Database::printHeadersAndData() 
{
	this->printHeaders();
	this->printData();
}

void Database::printTables() 
{
	unsigned int tablesLength = this->tables.size();

	for (unsigned int i = 0; i < tablesLength; i++) 
	{
		cout << this->tables.at(i) << "\n";
	}
	cout << "\n";
}

void Database::printErr() 
{
	if (this->err != nullptr) 
	{
		cout << "Err Number: " << err->what() << "\n";
		cout << "MySQL Error Code: " << err->getErrorCode() << "\n";
		cout << "MySQL State: " << err->getSQLState() << "\n";
	}
	else 
	{
		cout << "There are no reportable errs.\n";
	}
}

bool Database::add(const string table, const string values)
{
	bool outcome;

	string command = "INSERT INTO " + table + " VALUES (" + values + ")";
	outcome = this->execute(command);
	if (outcome)
		this->tableMaxIDs[table]++;

	return outcome;
}

bool Database::generate(const string table, const string number) 
{
	unsigned int max = stoi(number);
	bool outcome;
	this->retrieveTableMaxIDs();

	if (table == "Creature")
	{
		int creatureID, creatureTypeID, level, currentXP, currentHP, x, y;
		string currentMood, command;

		for (unsigned int i = 0; i < max; i++)
		{
			creatureID = this->tableMaxIDs["Creature"];
			creatureTypeID = rand() % 17;
			currentMood = this->moods.at(rand() % 5);
			x = rand() % 256;
			y = rand() % 256;

			command = to_string(creatureID) + ", " + to_string(creatureTypeID) + ", 1, 0, 1, '" + currentMood + "', " + to_string(x) + ", " + to_string(y);

			outcome = this->add(table, command);
		}
	}
	else if (table == "Door")
	{
		int doorID, doorTypeID, tileID, currentHP, isLocked;
		string command;
		
		for (unsigned int i = 0; i < max; i++)
		{
			doorID = this->tableMaxIDs["Door"];
			doorTypeID = rand() % 4;
			tileID = rand() % (this->tableMaxIDs["Tile"] + 1);
			isLocked = rand() % 2;

			command = to_string(doorID) + ", " + to_string(doorTypeID) + ", " + to_string(tileID) + ", 1, " + to_string(isLocked);

			outcome = this->add(table, command);
		}

	}
	else if (table == "Trap")
	{
		 int trapID, trapTypeID, tileID, charges;
		 string command;

		 for (unsigned int i = 0; i < max; i++)
		 {
			 trapID = this->tableMaxIDs["Trap"];
			 trapTypeID = rand() % 6;
			 tileID = rand() % (this->tableMaxIDs["Tile"] + 1);
			 charges = rand() % 4;

			 command = to_string(trapID) + ", " + to_string(trapTypeID) + ", " + to_string(tileID) + ", " + to_string(charges);

			outcome = this->add(table, command);
		 }
	}
	else if (table == "Tile")
	{
		int tileID, tileTypeID, x, y, currentHP, imageIndex, isVisible;
		string command;
		
		for (unsigned int i = 0; i < max; i++)
		{
			tileID = this->tableMaxIDs["Tile"];
			tileTypeID = rand() % 22;
			x = rand() % 256;
			y = rand() % 256;
			isVisible = rand() % 2;

			command = to_string(tileID) + ", " + to_string(tileTypeID) + ", " + to_string(x) + ", " + to_string(y) + ", 1, 1, " + to_string(isVisible);
			
			outcome = this->add(table, command);
		}
	}
	else
	{
		outcome = false;
	}

	return outcome;
}

bool Database::generateAll(const string number) 
{
	//unimplemented
	return true;
}

bool Database::remove(const string table, const string ID) 
{
	string tableID = table;
	tableID.at(0) = tolower(tableID.at(0));
	tableID.append("ID");

	string command = "DELETE FROM " + table + " WHERE " + table + "." + tableID + "=" + ID;

	bool outcome = this->execute(command);

	if (outcome)
		this->tableMaxIDs[table]--;

	return outcome;
}

bool Database::removeAll() 
{
	unsigned int tablesLength = this->implementationTables.size();
	bool outcome;
	string table;
	string command;

	for (unsigned int i = 0; i < tablesLength; i++) 
	{
		table = this->implementationTables.at(i);
		command = "DELETE FROM " + table;
		outcome = this->execute(command);
	}

	this->retrieveTableMaxIDs();

	return outcome;
}

bool Database::modify(const string table, const string column, const string ID, const string value) 
{
	string tableID = table;
	string command;
	bool outcome;

	tableID.at(0) = tolower(tableID.at(0));
	tableID.append("ID");

	command = "UPDATE " + table + " SET " + column + "=" + value + " WHERE " + table + "." + tableID + "=" + ID;

	outcome = this->update(command);

	return outcome;
}

vector<vector<string>> Database::viewElement(const string table, const string ID, const bool hasHeader, const bool hasFormatting) 
{
	vector<vector<string>> element;
	string tableID = table;
	tableID.at(0) = tolower(tableID.at(0));
	tableID.append("ID");

	string command = "SELECT * FROM " + table + " WHERE " + table + "." + tableID + "=" + ID;

	this->query(command);

	if (hasHeader)
		element = this->getHeadersAndData(hasFormatting);
	else
		element = this->getData(hasFormatting);

	return element;
}

vector<vector<string>> Database::viewTable(const string table, const bool hasHeader, const bool hasFormatting) 
{
	vector<vector<string>> tables;
	
	string command = "SELECT * FROM " + table;

	this->query(command);

	if (hasHeader)
		tables = this->getHeadersAndData(hasFormatting);
	else
		tables = this->getData(hasFormatting);

	return tables;
}

vector<vector<string>> Database::viewAll(const bool hasHeader, const bool hasFormatting) 
{
	vector<vector<string>> allTables;
	unsigned int tablesLength = this->tables.size();
	string command;

	for (unsigned int i = 0; i < tablesLength; i++) 
	{
		command = "SELECT * FROM " + this->tables.at(i);

		this->query(command);

		vector<vector<string>> data;

		if (hasHeader)
			data = this->getHeadersAndData(hasFormatting);
		else
			data = this->getData(hasFormatting);

		unsigned int rowLength = data.size();

		for (unsigned int j = 0; j < rowLength; j++) 
			allTables.push_back(data.at(j));
	}

	return allTables;
}

vector<vector<string>> Database::viewByColumn(const string table, const string column, const bool hasHeader, const bool hasFormatting)
{
	vector<vector<string>> element;

	string command = "SELECT " + column + " FROM " + table;

	this->query(command);

	if (hasHeader)
		element = this->getHeadersAndData(hasFormatting);
	else
		element = this->getData(hasFormatting);

	return element;
}

vector<vector<string>> Database::viewByName(const string table, const string name, const bool hasHeader, const bool hasFormatting)
{
	vector<vector<string>> element;
	string command = "SELECT * FROM " + table + " WHERE " + table + " .name='" + name + "'";

	this->query(command);

	if (hasHeader)
		element = this->getHeadersAndData(hasFormatting);
	else
		element = this->getData(hasFormatting);

	return element;
}

vector<string> Database::getTables()
{
	return this->tables;
}