#pragma once

#include"Login.h"
#include"Password.h"

class User
{
	Login login;
	Password password;
public:
	void registration();
	Login *getLogin();
	Password *getPassword();
};