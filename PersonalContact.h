#pragma once
#include <iostream>
#include <string>
using namespace std;

struct PersonalContact
{
public:
    PersonalContact() {}

    PersonalContact(int _id, string _name, string _phone, string _email, string _address)
    {
        id = _id;
        name = _name;
        phone_number = _phone;
        email = _email;
        address = _address;
    }

    ~PersonalContact() {}

    int id;
    string name;
    string phone_number;
    string email;
    string address;
};

