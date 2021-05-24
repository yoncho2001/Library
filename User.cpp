#include "User.h"

User::User()
{
	this->name;
    this->pasword;
    this->admin = false;
}

User::User(const User& other)
{
    User::setName(other.name);
    User::setPaswor(other.pasword);
    User::setAdmin(other.admin);
}

User& User::operator=(const User& other)
{
    if (this != &other)
    {
        User::setName(other.name);
        User::setPaswor(other.pasword);
        User::setAdmin(other.admin);
       
    }

    return *this;
}
User::User(const String name, const String pasword ,bool admin )
{
    User::setName(name);
    User::setPaswor(pasword);
    User::setAdmin(admin);
}

void User::setName(const String other)
{
    this->name = other;
}
String User::getName()const
{
    return this->name;
}

void User::setPaswor(const String other)
{
    this->pasword = other;
}
String User::getPaswor()const
{
    return this->pasword;
}

void User::setAdmin(const bool other)
{
    this->admin = other;
}
bool User::getAdmin()const
{
    return this->admin;
}