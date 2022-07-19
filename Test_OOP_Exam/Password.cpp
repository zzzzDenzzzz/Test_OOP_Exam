#include "Password.h"

void Password::setPassword(const string &password)
{
	this->password = password;
}

void Password::encryption()
{
	password += mask;
	for (size_t i = 0; i < password.length(); i++)
	{
		password[i] += key;
	}
}

void Password::decoding()
{
	for (size_t i = 0; i < password.length(); i++)
	{
		password[i] -= key;
	}
	password.resize(password.size() - mask.size());
}

void Password::print()
{
	cout << password << endl;
}
