#ifndef DATABASE_H
#define DATABASE_H

#include <stdlib.h>
#include <vector>
#include <map>

#include <mysql_driver.h>

#include <cppconn\driver.h>
#include <cppconn\connection.h>
#include <cppconn\resultset_metadata.h>
#include <cppconn\metadata.h>
#include <cppconn\statement.h>
#include <cppconn\exception.h>

using namespace std;
using namespace sql;

class Database {

private:

	//private pointers
	mysql::MySQL_Driver* driver;
	Connection* connection;
	Statement* statement;
	ResultSet* results;
	ResultSetMetaData* meta;
	SQLException* err;
	vector<vector<string>>* data;

	//private variables
	vector<short> resultSpaces;
	vector<string> tables;
	vector<string> moods;
	vector<string> implementationTables;
	map<string, int> tableMaxIDs;
	map<string, vector<string>> tableColumnNames;
	string address;
	string database;
	string user;
	string pass;

	//private initialization methods
	void initializeConnection();
	void initializeCreatureMoods();
	void initializeImplementationTables();
	bool setDatabase(const string& database);

	//private database methods
	bool execute(const string& statement);
	bool update(const string& statement);
	void query(const string& statement);

	//private helper methods
	void clearExecutionVariables();
	void clearColumnDataLengths();
	void calculateColumnDataLengths();
	void retrieveTableNames();
	void retrieveTableColumnNames();
	void retrieveTableMaxIDs();
	bool hasTable(const string& table);
	int getTableMaxID(const string& table);
	string& addSpaces(string& appended, const short& numberOfSpaces);
	vector<string>& getTableDataTypes();
	vector<vector<string>>& getHeaders(const bool& hasFormatting);
	vector<vector<string>>& getData(const bool& hasFormatting);
	vector<vector<string>>& getHeadersAndData(const bool& hasFormatting);

public:

	//constructors
	Database(const string& address, const string& database, const string& user, const string& pass);
	~Database();

	//public methods
	SQLException getErr();
	unsigned short login(const string username, const string password);
	bool hasErr();
	bool hasData();
	bool add(const string tableName, const string values);
	bool generate(const string tableName, const string number);
	bool generateAll(const string number);
	bool remove(const string tableName, const string ID);
	bool removeAll();
	bool modify(const string table, const string column, const string ID, const string value);
	vector<vector<string>> viewElement(const string tableName, const string ID, const bool hasHeader, const bool hasFormatting);
	vector<vector<string>> viewTable(const string tableName, const bool hasHeader, const bool hasFormatting);
	vector<vector<string>> viewAll(const bool hasHeader, const bool hasFormatting);
	vector<vector<string>> viewByColumn(const string tableName, const string column, const bool hasHeader, const bool hasFormatting);
	vector<vector<string>> viewByName(const string tableName, const string name, const bool hasHeader, const bool hasFormatting);
	vector<string> getTables();
	vector<short> getResultSpaces();

	//print methods
	void printData();
	void printHeaders();
	void printHeadersAndData();
	void printTables();
	void printErr();

};
#endif