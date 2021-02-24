#pragma once
#include <iostream>
#include <string>
#include "owner.h"
#include "contact.h"
//#include "MenuCommand.h"
#include "Controller.h"

class menuManage
{
    Controller controller;

public:
    void showMainMenu();
    void wrongChoice();
public:
    // for Owner, show interface
    void showOwnerMenu();
    void printPersonalContact(PersonalContact aasdsad);

public:
    // for Owner, functions
    void inputOwnerInfo();
    void outputOwnerInfo(); //소유자 정보 조회 메뉴
    void showOwnerInfoFix(); //소유자 정보 수정 메뉴
    void fixOwnerName();
    void fixOwnerNumber();
    void fixOwnerEmail();
    void fixOwnerAddress();
    void fixOwnerAccount();
    void chooseFixMenu(int _input);

public:
    // for Contact
    void showContactMenu();
public:
    // for Contact, functions
    //void addContact(string _name, string _phone_number, string _email, string _address);
    void addContact();
    void outputContactList();
    void searchPersonalContact();
    void showContactFix();
    void contactFix();
    void fixContactName();
    void fixContactNumber();
    void fixContactEmail();
    void fixContactAddress();
    void chooseIndexName();
    void chooseByIndex();
    void chooseByName();
    void eraseContact();
};

