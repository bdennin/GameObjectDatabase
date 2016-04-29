#ifndef GAMEOBJECTDATABASEUSER_H
#define GAMEOBJECTDATABASEUSER_H

#include <QtWidgets/QMainWindow>

#include "ui_GameObjectDatabaseUser.h"

#include "Database.h"

class GameObjectDatabaseUser : public QMainWindow
{
	Q_OBJECT

private:

	//private pointers
	Database* database;
	QPixmap* picture;

	//private GUI elements
	Ui::GameObjectDatabaseUser userWindow;

	//private variables
	vector<QString> tableNames;

	//private initialization methods
	void initializeTableNames();

private slots:

	void getObjects();
	void logout();
	void sendInformation();

public:

	GameObjectDatabaseUser(Database* database, QString username, QWidget* parent = 0);
	~GameObjectDatabaseUser();
};

#endif
