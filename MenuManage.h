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

public:
    // for Owner, show interface
    void showOwnerMenu();
    void printPersonalContact(PersonalContact _pcon);

public:
    // for Owner, functions
    void inputOwnerInfo();
    void outputOwnerInfo(); //������ ���� ��ȸ �޴�
    void ownerInfoFix(); //������ ���� ���� �޴�
    void fixOwnerName();
    void fixOwnerNumber();
    void fixOwnerEmail();
    void fixOwnerAddress();
    void fixOwnerAccount();


public:
    // for Contact
    void showContactMenu();
public:
    // for Contact, functions
    //void addContact(string _name, string _phone_number, string _email, string _address);
    void addContact();
    void outputContactList();
    void searchPersonalContact();
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

