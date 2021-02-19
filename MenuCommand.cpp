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
            cout << "���α׷��� �����մϴ�.";
            return;
        }
        default:
        {
            cout << "�߸��� �Է��Դϴ�. �ٽ� ���� ���ּ���.";
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
                menuManager.ownerInfoFix();

                int _input;
                cin >> _input;

                switch (_input)
                {
                case 1:
                    menuManager.fixOwnerName();
                    break;
                case 2:
                    menuManager.fixOwnerNumber();
                    break;
                case 3:
                    menuManager.fixOwnerEmail();
                    break;
                case 4:
                    menuManager.fixOwnerAddress();
                    break;
                case 5:
                    menuManager.fixOwnerAccount();
                    break;
                case 6:
                    return;
                default:
                    cout << "�߸��� �Է��Դϴ�. �ٽ� ���� ���ּ���.";
                    break;
                }
            }
        case 4:
            //runMainMenu();
            //bExitFlag = true;
            return;
        default:
            cout << "�߸��� �Է��Դϴ�. �ٽ� ���� ���ּ���.";
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
                menuManager.contactFix();

                int input_;
                cin >> input_;

                switch ( input_ )
                {
                case 1:
                    menuManager.fixContactName();
                    break;
                case 2:
                    menuManager.fixContactNumber();
                    break;
                case 3:
                    menuManager.fixContactEmail();
                    break;
                case 4:
                    menuManager.fixContactAddress();
                    break;
                case 5:
                    return;
                default:
                    cout << "�߸��� �Է��Դϴ�. �ٽ� ���� ���ּ���.";
                    break;
                }
            }
        //case 5: ����ó ����
        case 6:
            menuManager.eraseContact();
            break;
        case 7:
            return;
        default:
            cout << "�߸��� �Է��Դϴ�. �ٽ� ���� ���ּ���.";
            break;
        }
    }
}