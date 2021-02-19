#pragma once
#include <iostream>
#include <string>
using namespace std;

class owner
{
public:
    owner();
    ~owner();

    string name;
    string phone_number;
    string email;
    string address;
    string twitter_account;

    void insertOwnerInfo(string name, string phone_number, string email, string address, string twitter_account);

};