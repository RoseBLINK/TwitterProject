#include "owner.h"
#include <iostream>
#include <string>
using namespace std;


owner::owner()
{

}

owner::~owner()
{

}
void owner::insertOwnerInfo(string name, string phone_number, string email, string address, string twitter_account)
{
    this->name = name;
    this->phone_number = phone_number;
    this->email = email;
    this->address = address;
    this->twitter_account = twitter_account;
}
