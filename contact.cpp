#include "contact.h"
#include <iostream>
#include <string>
using namespace std;

contact::contact() : m_idx(0)
{

}

contact::~contact()
{

}

void contact::insertContact(string name, string phone_number, string email, string address)
{

    PersonalContact person(m_idx, name, phone_number, email, address);
    cont.push_back(person);

    /*std::pair<int, PersonalContact> pairData = std::make_pair(0, person);
    pairData.first = 0;
    pairData.second = person;*/

    //mCont.insert(std::make_pair(0, person));

    mCont[m_idx] = person;
    m_idx++;
}

bool contact::isValid(int idx)
{
    if ( mCont.size() <= idx )
    {
        // 문제가 있는 상황
        return false;
    }
    else
    {
        return true;
    }

}

bool contact::getPersonalContact(int idx, PersonalContact& cont)
{
    if ( mCont.size() <= idx )
    {
        // 문제가 있는 상황
        return false;
    }

    // 정상적인 상황
    cont = mCont[idx];
    return true;
}

PersonalContact contact::getPersonalContact(int idx)
{
    if ( mCont.size() <= idx )
    {
        // 문제가 있는 상황
    }

    // 정상적인 상황
    return mCont[idx];
}

vector<PersonalContact> contact::getPersonalContact(string name)
{
    for ( int i = 0; i < mCont.size(); ++i )
    {
        // 연관 컨테이너 ( key - value ) -> map
        // 시퀀스 컨테이너 ( value ) -> vector, array
        if ( mCont[i].name == name )
        {
            return mCont[i];
        }
    }
}

bool contact::erasePersonalContact(int idx)
{
    if ( mCont.size() <= idx )
    {
        // 문제가 있는 상황
        return false;
    }

    mCont.erase(idx);
    return true;
}