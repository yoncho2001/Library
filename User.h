#pragma once
#include <iostream>
#include "String.h"

class User
{
private:
    String name;
    String pasword;
    bool admin;

public:
    User();
    User(const User &other);
    User &operator=(const User &other);
    User(const String name, const String pasword, bool admin);

    void setName(const String other);
    String getName() const;

    void setPaswor(const String other);
    String getPaswor() const;

    void setAdmin(const bool other);
    bool getAdmin() const;

    void saveToFile(std::ostream &);
};
#include "User.cpp"