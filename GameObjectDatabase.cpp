#include "GameObjectDatabase.h"

GameObjectDatabase::GameObjectDatabase(Database* database, QWidget* parent)
	: QMainWindow(parent)
{
	this->admin = nullptr;
	this->database = database;

	loginWindow.setupUi(this);
}

GameObjectDatabase::~GameObjectDatabase()
{
	delete admin;
}

void GameObjectDatabase::login()
{
	QString pass = loginWindow.passwordInput->text();
	QString user = loginWindow.usernameInput->text();

	unsigned short outcome = database->login(user.toStdString(), pass.toStdString());

	switch (outcome)
	{

	case 0:
		loginWindow.errorLabel->setText("<font color='red'>Invalid login.</font>");
		break;
	case 1:
		this->hide();
		this->user = new GameObjectDatabaseUser(database, user, this);
		this->user->show();
		break;
	case 2:
		this->hide();
		this->admin = new GameObjectDatabaseAdmin(database, user, this);
		this->admin->show();
		break;
	default:
		break;
	}
}

Ui::GameObjectDatabase& GameObjectDatabase::getLoginWindow()
{
	return this->loginWindow;
}