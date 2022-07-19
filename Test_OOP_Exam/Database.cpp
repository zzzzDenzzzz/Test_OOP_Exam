#include "Database.h"

bool Database::checkAdmin()
{
    ifstream in(path_admin);
	if (in.good())
	{
		return true;
	}
    return false;
}

bool Database::checkUser(const string &login)
{
	ifstream in(path_users + login + ".txt");
	if (in.good())
	{
		return true;
	}
	return false;
}

void Database::recorLogindAdmin(const string &login)
{
	out.open(path_admin, ios::app);
	if (out.is_open())
	{
		out << "Логин: " << login << endl;
	}
	out.close();
}

void Database::recordPasswordAdmin(const string &password)
{
	out.open(path_admin, ios::app);
	if (out.is_open())
	{
		out << "Пароль: " << password << endl;
	}
	out.close();
}

void Database::recordLoginUser(const string &login)
{
	out.open(path_users + login + ".txt", ios::app);
	if (out.is_open())
	{
		out << "Логин: " << login << endl;
	}
	out.close();
}

void Database::recordPasswordUser(const string &password)
{
	out.open(path_users + password + ".txt", ios::app);
	if (out.is_open())
	{
		out << "Пароль: " << password << endl;
	}
	out.close();
}
