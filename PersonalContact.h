#pragma once
#include <iostream>
#include <string>
#include "PersonInfo.h"
using namespace std;

class PersonalContact : public PersonInfo
{
public:
    PersonalContact() {} //오버로드 걸리는거 Q

    PersonalContact(int _id, string _name, string _phone, string _email, string _address)
    {
        id = _id;
        name = _name;
        phone_number = _phone;
        email = _email;
        address = _address;
    }

    ~PersonalContact() {}
    
    int getId();



private:
    int id;
};

