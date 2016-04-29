#include <GameObjectDatabaseAdmin.h>
#include <GameObjectDatabase.h>
#include <qtablewidget.h>

GameObjectDatabaseAdmin::GameObjectDatabaseAdmin(Database* database, QString username, QWidget* parent)
	: QMainWindow(parent)
{
	this->database = database;
	this->addDialog = new QDialog(this);
	this->generateDialog = new QDialog(this);
	this->modifyDialog = new QDialog(this);
	this->removeDialog = new QDialog(this);
	this->removeAllDialog = new QDialog(this);
	this->objectDialog = new QDialog(this);
	this->tableDialog = new QDialog(this);

	this->initializeTableNames();
	this->initializeAddDialog();
	this->initializeGenerateDialog();
	this->initializeModifyDialog();
	this->initializeRemoveDialog();
	this->initializeRemoveAllDialog();
	this->initializeObjectDialog();
	this->initializeTableDialog();

	this->adminWindow.setupUi(this);

	this->adminWindow.welcomeLabel->setText("Welcome, " + username);
}

GameObjectDatabaseAdmin::~GameObjectDatabaseAdmin()
{
	delete this->addDialog;
	delete this->generateDialog;
	delete this->modifyDialog;
	delete this->removeDialog;
	delete this->removeAllDialog;
	delete this->objectDialog;
	delete this->tableDialog;
}

void GameObjectDatabaseAdmin::initializeTableNames()
{
	vector<string> tables = database->getTables();
	unsigned int tableLength = tables.size();

	for (unsigned int i = 0; i < tableLength; i++)
	{
		QString current = QString::fromStdString(tables.at(i));
		this->tableNames.push_back(current);
	}
}

void GameObjectDatabaseAdmin::initializeAddDialog()
{
	this->addObjectDialog.setupUi(addDialog);
	
	for (unsigned int i = 0; i < this->tableNames.size(); i++)
	{
		QString item = tableNames.at(i);
		this->addObjectDialog.tableComboBox->addItem(item);
	}
}

void GameObjectDatabaseAdmin::initializeGenerateDialog()
{
	this->generateObjectsDialog.setupUi(generateDialog);
	this->generateObjectsDialog.generateEdit->setValidator(new QIntValidator(0, 512, objectDialog));

	for (unsigned int i = 0; i < this->tableNames.size(); i++)
	{
		QString item = tableNames.at(i);
		if (item.contains("Type") || item.contains("Level") || item.contains("User") || item.contains("Spell"))
		{
			//no operation
		}
		else
		{
			this->generateObjectsDialog.tableComboBox->addItem(item);
		}
	}
}

void GameObjectDatabaseAdmin::initializeModifyDialog()
{
	this->modifyObjectDialog.setupUi(modifyDialog);
	this->modifyObjectDialog.IDEdit->setValidator(new QIntValidator(0, 65336, objectDialog));

	for (unsigned int i = 0; i < this->tableNames.size(); i++)
	{
		QString item = tableNames.at(i);
		this->modifyObjectDialog.tableComboBox->addItem(item);
	}
}

void GameObjectDatabaseAdmin::initializeRemoveDialog()
{
	this->removeObjectDialog.setupUi(removeDialog);
	this->removeObjectDialog.IDEdit->setValidator(new QIntValidator(0, 65336, objectDialog));

	for (unsigned int i = 0; i < this->tableNames.size(); i++)
	{
		QString item = tableNames.at(i);
		this->removeObjectDialog.tableComboBox->addItem(item);
	}
}

void GameObjectDatabaseAdmin::initializeRemoveAllDialog()
{
	this->removeAllObjectsDialog.setupUi(removeAllDialog);
}

void GameObjectDatabaseAdmin::initializeObjectDialog()
{
	this->viewObjectDialog.setupUi(objectDialog);
	this->viewObjectDialog.IDEdit->setValidator(new QIntValidator(0, 65336, objectDialog));

	for (unsigned int i = 0; i < this->tableNames.size(); i++)
	{
		QString item = tableNames.at(i);
		this->viewObjectDialog.tableComboBox->addItem(item);
	}
}

void GameObjectDatabaseAdmin::initializeTableDialog()
{
	this->viewTableDialog.setupUi(tableDialog);

	for (unsigned int i = 0; i < this->tableNames.size(); i++)
	{
		QString item = tableNames.at(i);
		this->viewTableDialog.tableComboBox->addItem(item);
	}
}

void GameObjectDatabaseAdmin::clearErrLabel()
{
	this->adminWindow.errLabel->clear();
}

void GameObjectDatabaseAdmin::add()
{
	this->clearErrLabel();
	int outcome = this->addDialog->exec();

	if (outcome == 1)
	{
		QString table = this->addObjectDialog.tableComboBox->currentText();
		QString record = this->addObjectDialog.recordEdit->text();

		outcome = database->add(table.toStdString(), record.toStdString());
		if (!outcome)
			this->adminWindow.errLabel->setText("<font color='red'>Add failed.</font>");
	}
}

void GameObjectDatabaseAdmin::generate()
{
	this->clearErrLabel();
	int outcome = this->generateDialog->exec();

	if (outcome == 1)
	{
		QString table = this->generateObjectsDialog.tableComboBox->currentText();
		QString number = this->generateObjectsDialog.generateEdit->text();

		outcome = database->generate(table.toStdString(), number.toStdString());
		if (!outcome)
			this->adminWindow.errLabel->setText("<font color='red'>Generate failed.</font>");
	}

	this->generateObjectsDialog.generateEdit->clear();
}

void GameObjectDatabaseAdmin::logout()
{
	GameObjectDatabase* parent = ((GameObjectDatabase*)this->parentWidget());
	parent->getLoginWindow().usernameInput->clear();
	parent->getLoginWindow().passwordInput->clear();
	parent->getLoginWindow().errorLabel->clear();
	parent->show();
	this->hide();
}

void GameObjectDatabaseAdmin::modify()
{
	this->clearErrLabel();
	int outcome = this->modifyDialog->exec();

	if (outcome == 1)
	{
		QString table = this->modifyObjectDialog.tableComboBox->currentText();
		QString id = this->modifyObjectDialog.IDEdit->text();
		QString column = this->modifyObjectDialog.columnEdit->text();
		QString value = this->modifyObjectDialog.valueEdit->text();

		outcome = database->modify(table.toStdString(), column.toStdString(), id.toStdString(), value.toStdString());
		if (!outcome)
			this->adminWindow.errLabel->setText("<font color='red'>Modify failed.</font>");
	}
	
	this->modifyObjectDialog.IDEdit->clear();
	this->modifyObjectDialog.columnEdit->clear();
	this->modifyObjectDialog.valueEdit->clear();
}

void GameObjectDatabaseAdmin::remove()
{
	this->clearErrLabel();
	int outcome = this->removeDialog->exec();

	if (outcome == 1)
	{
		QString table = this->removeObjectDialog.tableComboBox->currentText();
		QString id = this->removeObjectDialog.IDEdit->text();
		
		outcome = database->remove(table.toStdString(), id.toStdString());

		if (!outcome)
			this->adminWindow.errLabel->setText("<font color='red'>Remove failed.</font>");
	}

	this->removeObjectDialog.IDEdit->clear();
}

void GameObjectDatabaseAdmin::removeAll()
{
	this->clearErrLabel();
	int outcome = this->removeAllDialog->exec();

	if (outcome == 1)
	{
		outcome = database->removeAll();
		if (!outcome)
			this->adminWindow.errLabel->setText("<font color='red'>Remove all failed.</font>");
	}
}

void GameObjectDatabaseAdmin::view()
{
	this->clearErrLabel();
	int outcome = this->objectDialog->exec();

	if (outcome == 1)
	{
		QString table = this->viewObjectDialog.tableComboBox->currentText();
		QString id = this->viewObjectDialog.IDEdit->text();
	
		if (id == "")
		{
			this->adminWindow.errLabel->setText("<font color='red'>Invalid input.</font>");
			this->adminWindow.tableWidget->clear();
			this->adminWindow.tableWidget->setRowCount(0);
			this->adminWindow.tableWidget->setColumnCount(0);
		}
		else 
		{
			vector<vector<string>> data = database->viewElement(table.toStdString(), id.toStdString(), true, false);

			if (!database->hasData())
			{
				this->adminWindow.errLabel->setText("<font color='red'>No data found.</font>");
			}

			int rowLength = data.size();

			this->adminWindow.tableWidget->setRowCount(rowLength - 1);
			this->adminWindow.tableWidget->setColumnCount(data.at(0).size());

			for (unsigned int i = 0; i < rowLength; i++)
			{
				unsigned int columnLength = data.at(i).size();
				QTableWidgetItem* item;
				QString itemString;

				for (unsigned int j = 0; j < columnLength; j++)
				{
					itemString = QString::fromStdString(data.at(i).at(j).c_str());
					item = new QTableWidgetItem(itemString);

					if (i == 0)
						adminWindow.tableWidget->setHorizontalHeaderItem(j, item);
					else
						adminWindow.tableWidget->setItem(i - 1, j, item);
				}
			}
			this->adminWindow.tableWidget->resizeColumnsToContents();
		}
	}
	this->viewObjectDialog.IDEdit->clear();
}

void GameObjectDatabaseAdmin::viewTable()
{
	this->clearErrLabel();
	int outcome = this->tableDialog->exec();

	if (outcome == 1)
	{
		QString table = this->viewTableDialog.tableComboBox->currentText();
		vector<vector<string>> data = database->viewTable(table.toStdString(), true, false);

		if (!database->hasData())
		{
			this->adminWindow.errLabel->setText("<font color='red'>No data found.</font>");
		}
		
		unsigned int rowLength = data.size();

		this->adminWindow.tableWidget->setRowCount(rowLength - 1);
		this->adminWindow.tableWidget->setColumnCount(data.at(0).size());

		for (unsigned int i = 0; i < rowLength; i++)
		{
			unsigned int columnLength = data.at(i).size();
			QTableWidgetItem* item;
			QString itemString;

			for (unsigned int j = 0; j < columnLength; j++)
			{
				itemString = QString::fromStdString(data.at(i).at(j).c_str());
				item = new QTableWidgetItem(itemString);
				
				if (i == 0)
					adminWindow.tableWidget->setHorizontalHeaderItem(j, item);
				else
					adminWindow.tableWidget->setItem(i - 1, j, item);
			}
		}
		this->adminWindow.tableWidget->resizeColumnsToContents();
	}
}
