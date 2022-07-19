#include "Login.h"

string Login::getLogin()
{
    return login;
}

void Login::setLogin(const string &login)
{
    this->login = login;
}

void Login::print()
{
    cout << login << endl;
}
