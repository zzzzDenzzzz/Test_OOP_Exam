#pragma once

#include<fstream>;
#include<string>

using namespace std;

class Database
{
	ofstream out;
	const string path_admin{ "admin\\admin.txt" };
	const string path_users{ "users\\" };
public:
	bool checkAdmin();
	bool checkUser(const string &login);
	void recorLogindAdmin(const string &login);
	void recordPasswordAdmin(const string &password);
	void recordLoginUser(const string &login);
	void recordPasswordUser(const string &password);
};