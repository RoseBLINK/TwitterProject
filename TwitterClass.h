#pragma once
#include <iostream>
#include <string>
#include "owner.h"
using namespace std;

class twitter
{
    void load_account_info(void);
    void get_following(void);
    void get_timeline(void);

    void send_message(void);
};