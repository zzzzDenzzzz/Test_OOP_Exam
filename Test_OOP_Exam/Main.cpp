#include<Windows.h>
#include"Database.h"
#include"Display.h"
#include"Admin.h"
#include"Input.h"
#include"User.h"

int main()
{
	SetConsoleOutputCP(1251);

	Database db;
	Display display;
	Admin admin;
	Input in;
	User user;

	if (!db.checkAdmin())
	{
		display.titleAdminRegistration();
		display.titleLogin();
		db.recorLogindAdmin(in.setData());
		display.titlePassword();
		db.recordPasswordAdmin(in.setData());
		system("cls");
	}
	display.startPage();
	switch (in.setSymbol())
	{
	case '1':
		system("cls");
		display.titleLogin();
		if (db.checkUser(in.setData()))
		{
			//display.titlePassword();
			break;
		}
		else
		{
		    system("cls");
			display.titleUserRegistration();
			display.titleLogin();
			db.recordLoginUser(in.setData());
			display.titlePassword();
			break;
		}
		break;
	case '2':
		_exit(0);
		break;
	default:
		break;
	}
	
	return 0;
}