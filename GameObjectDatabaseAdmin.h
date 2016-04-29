#ifndef GAMEOBJECTDATABASEADMIN_H
#define GAMEOBJECTDATABASEADMIN_H

#include <QtWidgets/QMainWindow>

#include "ui_GameObjectDatabaseAdmin.h"
#include "ui_AddObjectDialog.h"
#include "ui_GenerateObjectsDialog.h"
#include "ui_ModifyObjectDialog.h"
#include "ui_RemoveObjectDialog.h"
#include "ui_RemoveAllObjectsDialog.h"
#include "ui_ViewObjectDialog.h"
#include "ui_ViewTableDialog.h"

#include "Database.h"

class GameObjectDatabaseAdmin : public QMainWindow
{
	Q_OBJECT

private:

	//private pointers
	Database* database;
	QDialog* addDialog;
	QDialog* generateDialog;
	QDialog* modifyDialog;
	QDialog* removeDialog;
	QDialog* removeAllDialog;
	QDialog* objectDialog;
	QDialog* tableDialog;

	//private GUI elements
	Ui::GameObjectDatabaseAdmin adminWindow;
	Ui::AddObjectDialog addObjectDialog;
	Ui::GenerateObjectsDialog generateObjectsDialog;
	Ui::ModifyObjectDialog modifyObjectDialog;
	Ui::RemoveObjectDialog removeObjectDialog;
	Ui::RemoveAllDialog removeAllObjectsDialog;
	Ui::ViewObjectDialog viewObjectDialog;
	Ui::ViewTableDialog viewTableDialog;

	//private variables
	vector<QString> tableNames;

	//private initialization methods
	void initializeTableNames();
	void initializeAddDialog();
	void initializeGenerateDialog();
	void initializeModifyDialog();
	void initializeRemoveDialog();
	void initializeRemoveAllDialog();
	void initializeObjectDialog();
	void initializeTableDialog();

	//private helper methods
	void clearErrLabel();

private slots:

	void add();
	void generate();
	void logout();
	void modify();
	void remove();
	void removeAll();
	void view();
	void viewTable();

public:

	GameObjectDatabaseAdmin(Database* database, QString username, QWidget* parent = 0);
	~GameObjectDatabaseAdmin();
};

#endif
