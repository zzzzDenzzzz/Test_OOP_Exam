#pragma once

#include"Login.h"
#include<iostream>

class Password
{
	string password;
	const string mask{ "1e45gb:87^SD" };
	const char key = '$';
public:
	void setPassword(const string &password);
	void encryption();
	void decoding();
	void print();
};