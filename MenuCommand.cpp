#include "MenuCommand.h"
#include <iostream>
#include <string>
#include "MenuManage.h"

using namespace std;

MenuCommand::MenuCommand()
{

}

MenuCommand::~MenuCommand()
{

}

enum en_mainMenu
{
    en_ownerMenu = 1,
    en_ContactMenu,
    en_exit,
};

void MenuCommand::runMainMenu()
{
    while ( true )
    {
        menuManager.showMainMenu();

        int input;
        cin >> input;

        switch ( input )
        {
        case en_ownerMenu:
        {
            runOwnerMenu();
            break;
        }
        case en_ContactMenu:
        {
            runContactMenu();
            break;
        }
        case en_exit:
        {
            cout << "프로그램을 종료합니다.";
            return;
        }
        default:
        {
            menuManager.wrongChoice();
            break;
        }
        }
    }

}

enum en_owner
{
    en_input_owner = 1,
    en_output_owner,
    en_fix_owner,
    en_previous_owner
};

void MenuCommand::runOwnerMenu()
{
    //bool bExitFlag = false;
    while ( true )
    {
        menuManager.showOwnerMenu();

        int input;
        cin >> input;

        switch ( input )
        {
        case en_input_owner:
            menuManager.inputOwnerInfo();
            break;
        case en_output_owner:
            menuManager.outputOwnerInfo();
            break;
        case en_fix_owner:
            while (true)
            {
                menuManager.showOwnerInfoFix();

                int _input;
                cin >> _input;

                menuManager.chooseFixMenu(_input);
                break;
            }
        case en_previous_owner:
            //runMainMenu();
            //bExitFlag = true;
            return;
        default:
            menuManager.wrongChoice();
            break;
        }
        /*if ( bExitFlag )
            break;*/
    }
}

enum EN_ContactMenu
{
    en_add = 1,
    en_output,
    en_search,
    en_fix,
    en_copy,
    en_erase,
    en_previous
};

void MenuCommand::runContactMenu()
{
    while ( true )
    {
        menuManager.showContactMenu();

        int input;
        cin >> input;

        switch ( input )
        {
        case en_add:
            menuManager.addContact();
            break;
        case en_output:
            menuManager.outputContactList();
            break;
        case en_search:
            menuManager.searchPersonalContact();
            break;
        case en_fix:
            while (true)
            {
                menuManager.showContactFix();
                menuManager.contactFix();
                break;
            }
            break;
        //case 5: 연락처 복사
        case en_erase:
            menuManager.eraseContact();
            break;
        case en_previous:
            return;
        default:
            menuManager.wrongChoice();
            break;
        }
    }
}