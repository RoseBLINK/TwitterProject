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

bool contact::getPersonalContact(int idx, PersonalContact& cont) //인자에 값 채워 나가기
{
    if ( (int)mCont.size() <= idx || idx  < 0 )
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
    // 1. 지역 변수 만들어서 그걸 리턴하는 방법
    PersonalContact aaa;
    if ( mCont.size() <= idx )
    {
        // 문제가 있는 상황 - 처리 못함
        //cout<<;
    }

    // 정상적인 상황
    aaa = mCont[idx];
    return aaa;

    // 2. 멤버 변수로 바로 리턴하는 방법
    //return mCont[idx];
}

vector<PersonalContact> contact::getPersonalContact(string name)
{
    // 빈벡터 생성
    vector<PersonalContact> cntct;

    for ( int i = 0; i < mCont.size(); ++i )
    {
        // 연관 컨테이너 ( key - value ) -> map
        // 시퀀스 컨테이너 ( value ) -> vector, array
        if ( mCont[i].getName() == name )
        {
            //return mCont[i];

            //데이터 넣기
            cntct.push_back(mCont[i]);
        }
    }

    //벡터 자체를 리턴
    return cntct;
}

bool contact::setPersonalContact(int idx, const PersonalContact& pCont)
{
    if (mCont.size() <= idx)
    {
        return false;
    }

    mCont[idx] = pCont;
    return true;
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