#pragma once

#include<string>
#include<iostream>

using namespace std;

class Login
{
	string login;
public:
	string getLogin();
	void setLogin(const string &login);
	void print();
};