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
        // ������ �ִ� ��Ȳ
        return false;
    }
    else
    {
        return true;
    }
}

bool contact::getPersonalContact(int idx, PersonalContact& cont) //���ڿ� �� ä�� ������
{
    if ( (int)mCont.size() <= idx || idx  < 0 )
    {
        // ������ �ִ� ��Ȳ
        return false;
    }

    // �������� ��Ȳ
    cont = mCont[idx];
    return true;
}

PersonalContact contact::getPersonalContact(int idx)
{
    // 1. ���� ���� ���� �װ� �����ϴ� ���
    PersonalContact aaa;
    if ( mCont.size() <= idx )
    {
        // ������ �ִ� ��Ȳ - ó�� ����
        //cout<<;
    }

    // �������� ��Ȳ
    aaa = mCont[idx];
    return aaa;

    // 2. ��� ������ �ٷ� �����ϴ� ���
    //return mCont[idx];
}

vector<PersonalContact> contact::getPersonalContact(string name)
{
    // ���� ����
    vector<PersonalContact> cntct;

    for ( int i = 0; i < mCont.size(); ++i )
    {
        // ���� �����̳� ( key - value ) -> map
        // ������ �����̳� ( value ) -> vector, array
        if ( mCont[i].getName() == name )
        {
            //return mCont[i];

            //������ �ֱ�
            cntct.push_back(mCont[i]);
        }
    }

    //���� ��ü�� ����
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
        // ������ �ִ� ��Ȳ
        return false;
    }

    mCont.erase(idx);
    return true;
}