#include "GameObjectDatabase.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	string address, name, user, pass, command;

	address = "tcp://127.0.0.1:3502";
	name = "hydra";
	user = "bdenning";
	pass = "angel123";

	Database* database = new Database(address, name, user, pass);

	QApplication GOD(argc, argv);
	GameObjectDatabase GUI(database);
	
	GUI.show();

	return GOD.exec();
}
