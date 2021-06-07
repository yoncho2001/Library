#pragma once
#include "Library.h"

class Run
{
public:
    Library start ;
    User curentUser;
    bool isRuning; 
    bool isOpen;
    bool isAdmin;
    bool isLogin;

    Run();
    void run();
    void isLoged(const User& curentUser );
};
#include "Run.cpp"
