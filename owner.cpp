#include "owner.h"
#include <iostream>
#include <string>
using namespace std;


owner::owner()
{

}

owner::owner(string _name, string _phone_number, string _email, string _address, string _twitter_account, int _PersonIdx) : PersonInfo(_PersonIdx)
{
    name = _name;
    phone_number = _phone_number;
    email = _email;
    address = _address;
    this->twitter_account = _twitter_account;
}

owner::~owner()
{

}

string owner::getTwitterAccount()
{
    return twitter_account;
}

void owner::insertOwnerInfo(string _name, string _phone_number, string _email, string _address, string _twitter_account)
{
    name = _name;
    phone_number = _phone_number;
    email = _email;
    address = _address;
    this->twitter_account = _twitter_account;
}
