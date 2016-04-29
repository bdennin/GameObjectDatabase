#include <GameObjectDatabaseUser.h>
#include <GameObjectDatabase.h>

GameObjectDatabaseUser::GameObjectDatabaseUser(Database* database, QString username, QWidget* parent)
	: QMainWindow(parent)
{
	this->database = database;
	this->picture = nullptr;

	this->userWindow.setupUi(this);
	this->initializeTableNames();

	this->userWindow.welcomeLabel->setText("Welcome, " + username);
	this->userWindow.image->setScaledContents(true);
}

GameObjectDatabaseUser::~GameObjectDatabaseUser()
{
	delete this->picture;
}

void GameObjectDatabaseUser::initializeTableNames()
{
	vector<string> tables = database->getTables();
	unsigned int tableLength = tables.size();

	for (unsigned int i = 0; i < tableLength; i++)
	{
		QString current = QString::fromStdString(tables.at(i));

		if (current.contains("Type"))
		{
			this->tableNames.push_back(current);
			this->userWindow.typeComboBox->addItem(current);
		}
	}
}

void GameObjectDatabaseUser::getObjects()
{
	this->userWindow.obectComboBox->clear();

	QString table = this->userWindow.typeComboBox->currentText();

	vector<vector<string>> data = this->database->viewByColumn(table.toStdString(), "name", false, false);
	unsigned int dataLength = data.size();

	for (unsigned int i = 0; i < dataLength; i++)
	{
		unsigned int rowLength = data.at(i).size();

		for (unsigned int j = 0; j < rowLength; j++)
		{
			QString item = QString::fromStdString(data.at(i).at(j));
			this->userWindow.obectComboBox->addItem(item);
		}
	}
}

void GameObjectDatabaseUser::logout()
{
	GameObjectDatabase* parent = ((GameObjectDatabase*)this->parentWidget());
	parent->getLoginWindow().usernameInput->clear();
	parent->getLoginWindow().passwordInput->clear();
	parent->getLoginWindow().errorLabel->clear();
	parent->show();
	this->hide();
}

void GameObjectDatabaseUser::sendInformation()
{
	this->userWindow.listWidget->clear();
	this->userWindow.image->clear();
	if (this->picture != nullptr)
		delete picture;

	QString table = this->userWindow.typeComboBox->currentText();
	QString name = this->userWindow.obectComboBox->currentText();
	QString imagePath;

	vector<vector<string>> data = this->database->viewByName(table.toStdString(), name.toStdString(), true, false);
	unsigned int dataLength = data.at(0).size();
	
	for (unsigned int i = 0; i < dataLength; i++)
	{
		QString header = QString::fromStdString(data.at(0).at(i));
		QString info = QString::fromStdString(data.at(1).at(i));
		QString formatted;

		if (header.size() > 13)
			formatted = "" + header + ":\t" + info;
		else
			formatted = "" + header + ":\t\t" + info;
		
		if (header == "imageLoc")
			imagePath = info;

		this->userWindow.listWidget->addItem(formatted);
	}

	this->picture = new QPixmap(imagePath);
	this->userWindow.image->setPixmap(*picture);
}