#pragma once
#include <string>

using namespace std;

class PersonInfo
{

public:
    PersonInfo();
    PersonInfo(int _PersonIdx);
    ~PersonInfo();

    string getName();
    string getPhoneNumber();
    string getEmail();
    string getAddress();

    int getPersonalIdx() { return PersonIdx; }

protected:
    string name;
    string phone_number;
    string email;
    string address;

private:
    int PersonIdx;


};