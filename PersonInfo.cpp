#include "PersonInfo.h"


PersonInfo::PersonInfo()
{
}

PersonInfo::PersonInfo(int _PersonIdx)
{
    PersonIdx = _PersonIdx;
}

PersonInfo::~PersonInfo()
{

}

string PersonInfo::getName()
{
    return name;
}

string PersonInfo::getPhoneNumber()
{
    return phone_number;
}

string PersonInfo::getEmail()
{
    return email;
}

string PersonInfo::getAddress()
{
    return address;
}