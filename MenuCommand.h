#pragma once
#include <iostream>
#include <string>
#include "MenuManage.h"
using namespace std;

class MenuCommand
{
private:
    menuManage menuManager;

public:
    MenuCommand();
    ~MenuCommand();

public:
    void runMainMenu();
    void runOwnerMenu();
    void runContactMenu();
};

