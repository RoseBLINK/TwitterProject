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

void MenuCommand::runMainMenu()
{
    while ( true )
    {
        menuManager.showMainMenu();

        int input;
        cin >> input;

        switch ( input )
        {
        case 1:
        {
            runOwnerMenu();
            break;
        }
        case 2:
        {
            runContactMenu();
            break;
        }
        case 3:
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
        case 1:
            menuManager.inputOwnerInfo();
            break;
        case 2:
            menuManager.outputOwnerInfo();
            break;
        case 3:
            while (true)
            {
                menuManager.showOwnerInfoFix();

                menuManager.chooseFixMenu();
                break;
            }
        case 4:
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

void MenuCommand::runContactMenu()
{
    while ( true )
    {
        menuManager.showContactMenu();

        int input;
        cin >> input;

        switch ( input )
        {
        case 1:
            menuManager.addContact();
            break;
        case 2:
            menuManager.outputContactList();
            break;
        case 3:
            menuManager.searchPersonalContact();
            break;
        case 4:
            while (true)
            {
                menuManager.showContactFix();
                menuManager.contactFix();
                break;
            }
        //case 5: 연락처 복사
        case 6:
            menuManager.eraseContact();
            break;
        case 7:
            return;
        default:
            menuManager.wrongChoice();
            break;
        }
    }
}