#pragma once
#include <iostream>
#include <string>
#include "PersonInfo.h"
using namespace std;

class owner : public PersonInfo
{
public:
    owner();
    owner(string _name, string _phone_number, string _email, string _address, 
          string _twitter_account, int _PersonIdx );
    ~owner();

    void insertOwnerInfo(string name, string phone_number, string email, string address, string twitter_account);

    string getTwitterAccount();

private:
    string twitter_account;

};