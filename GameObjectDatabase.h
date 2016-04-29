#ifndef GAMEOBJECTDATABASE_H
#define GAMEOBJECTDATABASE_H

#include <QtWidgets/QMainWindow>

#include "ui_GameObjectDatabase.h"
#include "GameObjectDatabaseAdmin.h"
#include "GameObjectDatabaseUser.h"

#include "Database.h"

class GameObjectDatabase : public QMainWindow
{
	Q_OBJECT

private:

	//private pointers
	Database* database;

	//private GUI elements
	Ui::GameObjectDatabase loginWindow;
	GameObjectDatabaseAdmin* admin;
	GameObjectDatabaseUser* user;

private slots:

	void login();

public:

	GameObjectDatabase(Database* database, QWidget* parent = 0);
	~GameObjectDatabase();

	Ui::GameObjectDatabase& getLoginWindow();
};

#endif
