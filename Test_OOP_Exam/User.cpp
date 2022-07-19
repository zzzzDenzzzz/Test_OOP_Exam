#include "User.h"

Login *User::getLogin()
{
    return &login;
}

Password *User::getPassword()
{
    return &password;
}
