#pragma once
#include <iostream>
#include <string>
#include "owner.h"
#include "PersonalContact.h"
#include <array>
#include <vector>
#include <map>

using namespace std;

class contact
{
public:
    contact();
    ~contact();

    void insertContact(string _name, string _phone_number, string _email, string _address);
    bool getPersonalContact(int idx, PersonalContact& cont);
    PersonalContact getPersonalContact(int idx);
    PersonalContact getPersonalContact(string name);

    bool erasePersonalContact(int idx);

public:
    // list ���·� ����(PersonalContact)
    vector<PersonalContact> cont;
    map<int, PersonalContact> mCont;

private:
    int m_idx;
};