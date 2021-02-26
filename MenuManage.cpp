#include "menuManage.h"
#include <iostream>
#include <string>
#include "owner.h"
#include "contact.h"
using namespace std;

enum En_search_P_contact
{
    searchByIndex = 1,
    searchByName,
    previous
};


void menuManage::wrongChoice()
{
    cout << "�߸��� �Է��Դϴ�. �ٽ� ���� ���ּ���.";
    cout << endl;
}

void menuManage::inputOwnerInfo()
{
    string name;
    cout << "�̸�: ";
    cin >> name;

    string phone_number;
    cout << "��ȭ��ȣ: ";
    cin >> phone_number;

    string email;
    cout << "�̸���: ";
    cin >> email;

    string address;
    cout << "�ּ�: ";
    cin >> address;

    string twitter_account;
    cout << "Ʈ���� ����: ";
    cin >> twitter_account;

    /*owner daghfdui(name, phone_number, email, address, twitter_account);
    controller.setOwner(daghfdui);*/

    controller.getOwner().insertOwnerInfo(name, phone_number, email, address, twitter_account);

    cout << "�Է��� �Ϸ� �Ǿ����ϴ�." << endl;
    cout << endl;

}

void menuManage::outputOwnerInfo()
{
    cout << "����� ����" << endl;
    cout << "�̸�: " << controller.getOwner().getName() << endl;
    cout << "��ȭ��ȣ: " << controller.getOwner().getPhoneNumber() << endl;
    cout << "�̸���: " << controller.getOwner().getEmail() << endl;
    cout << "�ּ�: " << controller.getOwner().getAddress() << endl;
    cout << "Ʈ���� ����: " << controller.getOwner().getTwitterAccount() << endl;
    cout << endl;
}

void menuManage::fixOwnerName()
{
    cout << "���� ������ �̸�: " << controller.getOwner().getName() << endl;
    cout << "� �̸����� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ �̸� �Է�: ";
    cout << endl;

    string new_name;
    cin >> new_name;

    cout << endl;

    controller.getOwner().getName() = new_name;

    cout << "������ �Ϸ� �Ǿ����ϴ�." << endl;
    cout << endl;
    cout << "������ ����� ����" << endl;
    cout << "�̸�: " << controller.getOwner().getName() << endl;
    cout << "��ȭ��ȣ: " << controller.getOwner().getPhoneNumber() << endl;
    cout << "�̸���: " << controller.getOwner().getEmail() << endl;
    cout << "�ּ�: " << controller.getOwner().getAddress() << endl;
    cout << "Ʈ���� ����: " << controller.getOwner().getTwitterAccount() << endl;
    cout << endl;
}

void menuManage::fixOwnerNumber()
{
    cout << "���� ������ ��ȭ��ȣ: " << controller.getOwner().getPhoneNumber() << endl;
    cout << "� ��ȭ��ȣ�� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ ��ȭ��ȣ �Է�: ";

    string new_phone_number;
    cin >> new_phone_number;

    cout << endl;

    controller.getOwner().getPhoneNumber() = new_phone_number;

    cout << "������ �Ϸ� �Ǿ����ϴ�." << endl;
    cout << endl;
    cout << "������ ����� ����" << endl;
    cout << "�̸�: " << controller.getOwner().getName() << endl;
    cout << "��ȭ��ȣ: " << controller.getOwner().getPhoneNumber() << endl;
    cout << "�̸���: " << controller.getOwner().getEmail() << endl;
    cout << "�ּ�: " << controller.getOwner().getAddress() << endl;
    cout << "Ʈ���� ����: " << controller.getOwner().getTwitterAccount() << endl;
    cout << endl;
}

void menuManage::fixOwnerEmail()
{
    cout << "���� ������ �̸���: " << controller.getOwner().getEmail() << endl;
    cout << "� �̸��Ϸ� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ �̸��� �Է�: ";

    string new_email;
    cin >> new_email;

    cout << endl;

    controller.getOwner().getEmail() = new_email;

    cout << "������ �Ϸ� �Ǿ����ϴ�." << endl;
    cout << endl;
    cout << "������ ����� ����" << endl;
    cout << "�̸�: " << controller.getOwner().getName() << endl;
    cout << "��ȭ��ȣ: " << controller.getOwner().getPhoneNumber() << endl;
    cout << "�̸���: " << controller.getOwner().getEmail() << endl;
    cout << "�ּ�: " << controller.getOwner().getAddress() << endl;
    cout << "Ʈ���� ����: " << controller.getOwner().getTwitterAccount() << endl;
    cout << endl;
}
void menuManage::fixOwnerAddress()
{
    cout << "���� ������ �ּ�: " << controller.getOwner().getAddress() << endl;
    cout << "� �ּҷ� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ �ּ� �Է�: ";

    string new_address;
    cin >> new_address;

    cout << endl;

    controller.getOwner().getAddress() = new_address;

    cout << "������ �Ϸ� �Ǿ����ϴ�." << endl;
    cout << endl;
    cout << "������ ����� ����" << endl;
    cout << "�̸�: " << controller.getOwner().getName() << endl;
    cout << "��ȭ��ȣ: " << controller.getOwner().getPhoneNumber() << endl;
    cout << "�̸���: " << controller.getOwner().getEmail() << endl;
    cout << "�ּ�: " << controller.getOwner().getAddress() << endl;
    cout << "Ʈ���� ����: " << controller.getOwner().getTwitterAccount() << endl;
    cout << endl;
}
void menuManage::fixOwnerAccount()
{
    cout << "���� ������ ����: " << controller.getOwner().getTwitterAccount() << endl;
    cout << "� �������� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ ���� �Է�: ";

    cout << endl;

    string new_account;
    cin >> new_account;

    controller.getOwner().getTwitterAccount() = new_account;

    cout << "������ �Ϸ� �Ǿ����ϴ�." << endl;
    cout << endl;
    cout << "������ ����� ����" << endl;
    cout << "�̸�: " << controller.getOwner().getName() << endl;
    cout << "��ȭ��ȣ: " << controller.getOwner().getPhoneNumber() << endl;
    cout << "�̸���: " << controller.getOwner().getEmail() << endl;
    cout << "�ּ�: " << controller.getOwner().getAddress() << endl;
    cout << "Ʈ���� ����: " << controller.getOwner().getTwitterAccount() << endl;
    cout << endl;
}

void menuManage::addContact()
{
    string name;
    cout << "����ó �̸�: ";
    cin >> name;

    string phone_number;
    cout << "����ó ��ȭ��ȣ: ";
    cin >> phone_number;

    string email;
    cout << "����ó �̸���: ";
    cin >> email;

    string address;
    cout << "����ó �ּ�: ";
    cin >> address;

    controller.getContact().insertContact(name, phone_number, email, address);

    cout << "�ű� ����ó �߰��� �Ϸ� �Ǿ����ϴ�." << endl;
    cout << endl;
}

void menuManage::outputContactList()
{
    cout << "����� ��� ����ó ����(�̸�)" << endl;
    for (int i = 0; i < controller.getContact().cont.size(); i++)
    {
        cout << i << ": " << "�̸�: " << controller.getContact().cont[i].getName() << endl;
        cout << endl;
    }
}

void menuManage::searchPersonalContact()
{
    while ( true )
    {
        chooseIndexName();

        int input;
        cin >> input;

        switch ( input )
        {
        case searchByIndex:// index�� ��ȸ
            chooseByIndex();
            break;
        case searchByName:// name���� ��ȸ
            chooseByName();
            //�̿ϼ�
            break;
        case previous:
            return;
        default:
            cout << "�߸��� �Է��Դϴ�. �ٽ� ���� ���ּ���.";
            break;
        }
    }
}

void menuManage::showMainMenu()
{
    cout << "���θ޴�" << endl;
    cout << "1. ������ ����" << endl;
    cout << "2. ����ó ����" << endl;
    cout << "3. ���α׷� ����" << endl;
    cout << endl;
}

void menuManage::showOwnerMenu()
{
    cout << "������ ���� ���" << endl;
    cout << "1. ������ ���� �Է�" << endl;
    cout << "2. ������ ���� ��ȸ" << endl;
    cout << "3. ������ ���� ����" << endl;
    cout << "4. ���� ȭ��" << endl;
    cout << endl;
}

void menuManage::showOwnerInfoFix() // ownerMenu3
{
    cout << "������ ���� ���� �޴�" << endl;
    cout << "1. ������ �̸� ����" << endl;
    cout << "2. ������ ��ȭ��ȣ ����" << endl;
    cout << "3. ������ �̸��� ����" << endl;
    cout << "4. ������ �ּ� ����" << endl;
    cout << "5. ������ Ʈ���� ���� ����" << endl;
    cout << "6. ���� �޴���" << endl;
    cout << endl;
}

enum EN_FIX_OWNER
{
    enName = 1,
    enNumber,
    enEmail,
    enAddress,
    enAccount,
    enPrevious
};

void menuManage::chooseFixMenu(int _input) //cin�� �ƴ� �Լ� ���ڷ� �޵��� ���ĺ���
{
    switch ( _input )
    {
    case enName:
        fixOwnerName();
        break;
    case enNumber:
        fixOwnerNumber();
        break;
    case enEmail:
        fixOwnerEmail();
        break;
    case enAddress:
        fixOwnerAddress();
        break;
    case enAccount:
        fixOwnerAccount();
        break;
    case enPrevious:
        return;
    default:
        cout << "�߸��� �Է��Դϴ�. �ٽ� ���� ���ּ���.";
        cout << endl;
        break;
    }
}

void menuManage::showContactMenu()
{
    cout << "����ó ���� ���" << endl;
    cout << "1. ����ó �߰� �Է�" << endl;
    cout << "2. ����ó ��� ��ȸ" << endl;
    cout << "3. ����ó �� ��ȸ" << endl;
    cout << "4. ���� ����ó ����" << endl;
    cout << "5. ����ó ����" << endl;
    cout << "6. ���� ����ó ����" << endl;
    cout << "7. ���� �޴���" << endl;
    cout << endl;
}

void menuManage::showContactFix() //contactMenu4
{
    cout << "1. ����ó �̸� ����" << endl;
    cout << "2. ����ó ��ȭ��ȣ ����" << endl;
    cout << "3. ����ó �̸��� ����" << endl;
    cout << "4. ����ó �ּ� ����" << endl;
    cout << "5. ���� �޴���" << endl;
    cout << endl;
}

enum contactFix
{
    fixCName = 1,
    fixCNumber,
    fixCEmail,
    fixCAddress,
    Cprevious
};

void menuManage::contactFix()
{
    int input_;
    cin >> input_;

    switch ( input_ )
    {
    case fixCName:
        fixContactName();
        break;
    case fixCNumber:
        fixContactNumber();
        break;
    case fixCEmail:
        fixContactEmail();
        break;
    case fixCAddress:
        fixContactAddress();
        break;
    case Cprevious:
        return;
    default:
        cout << "�߸��� �Է��Դϴ�. �ٽ� ���� ���ּ���.";
        cout << endl;
        break;
    }
}

void menuManage::fixContactName()
{

    cout << "���� �Ͻ� ����ó�� index�� �Է� �ϼ���: ";
    int idx;
    cin >> idx;

    // �׽���
    PersonalContact sCont;
    bool bNormal = controller.getContact().getPersonalContact(idx, sCont);
    if ( !bNormal )
    {
        cout << "�߸��� ���� �Է��ϼ̽��ϴ�";
        cout << endl;
        return;
    }

    cout << "�����Ͻ� ����ó(�̸�): " << sCont.getName() << endl;
    cout << "� �̸����� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ �̸� �Է�: ";

    string new_name;
    cin >> new_name;
    cout << endl;

    sCont.getName() = new_name;
    bool bName = controller.getContact().setPersonalContact(idx, sCont);

    if ( !bName )
    {
        cout << "�̸� ������ �����߽��ϴ�" << endl;
        return;
    }

    printPersonalContact(sCont);
}

void menuManage::fixContactNumber()
{
    cout << "���� �Ͻ� ����ó�� index�� �Է� �ϼ���: ";
    int idx;
    cin >> idx;
    cout << endl;

    //// 1. �Լ��� �̿��� ����ó��
    //bool bValid = controller.getContact().isValid(idx);
    //if ( !bValid )
    //{
    //    cout <<"�߸��� ���� �Է�~~";
    //    return;
    //}

    //PersonalContact _pcon = controller.getContact().getPersonalContact(idx);


    // 2. getPersonalContact���� �� ä�� ������ (�Լ� �ȿ� ����ó������ ����)
    PersonalContact sCont;
    bool bNormal = controller.getContact().getPersonalContact(idx, sCont);
    if ( !bNormal )
    {
        cout << "�߸��� ���� �Է��ϼ̽��ϴ�.";
        cout << endl;
        return;
    }


    cout << "�����Ͻ� ����ó(��ȭ��ȣ): " << sCont.getPhoneNumber() << endl;
    cout << "� ��ȭ��ȣ�� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ ��ȭ��ȣ �Է�: ";

    string new_phone_number;
    cin >> new_phone_number;
    cout << endl;

    sCont.getPhoneNumber() = new_phone_number;
    bool bNum = controller.getContact().setPersonalContact(idx, sCont);

    if ( !bNum )
    {
        cout << "��ȭ��ȣ ������ �����߽��ϴ�. " << endl;
        return;
    }

    cout << "������ �Ϸ� �Ǿ����ϴ�." << endl;
    cout << "������ ����ó ����: " << endl;

    printPersonalContact(sCont);
}

void menuManage::fixContactEmail()
{
    //PersonalContact _pcon = controller.getContact().getPersonalContact(idx);

    cout << "���� �Ͻ� ����ó�� index�� �Է� �ϼ���: ";
    int idx;
    cin >> idx;

    PersonalContact sCont;
    bool bNormal = controller.getContact().getPersonalContact(idx, sCont);
    if ( !bNormal )
    {
        cout << "�߸��� ���� �Է��ϼ̽��ϴ�";
        cout << endl;
        return;
    }

    cout << "�����Ͻ� ����ó(�̸���): " << controller.getContact().mCont[idx].getEmail() << endl;
    cout << "� �̸��Ϸ� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ �̸��� �Է�: ";

    string new_email;
    cin >> new_email;

    controller.getContact().mCont[idx].getEmail() = new_email;

    cout << "������ �Ϸ� �Ǿ����ϴ�." << endl;
    cout << "������ ����ó ����: " << endl;
    cout << "�̸�: " << controller.getContact().mCont[idx].getName() << endl;
    cout << "��ȭ��ȣ: " << controller.getContact().mCont[idx].getPhoneNumber() << endl;
    cout << "�̸���: " << controller.getContact().mCont[idx].getEmail() << endl;
    cout << "�ּ�: " << controller.getContact().mCont[idx].getAddress() << endl;
    cout << endl;
}
void menuManage::fixContactAddress()
{
    //PersonalContact _pcon = controller.getContact().getPersonalContact(idx);

    cout << "���� �Ͻ� ����ó�� index�� �Է� �ϼ���: ";
    int idx;
    cin >> idx;

    PersonalContact sCont;
    bool bNormal = controller.getContact().getPersonalContact(idx, sCont);
    if ( !bNormal )
    {
        cout << "�߸��� ���� �Է��ϼ̽��ϴ�";
        cout << endl;
        return;
    }

    cout << "�����Ͻ� ����ó(�ּ�): " << controller.getContact().mCont[idx].getEmail() << endl;
    cout << "� �ּҷ� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ �ּ� �Է�: ";

    string new_address;
    cin >> new_address;

    controller.getContact().mCont[idx].getAddress() = new_address;
    
    cout << "������ �Ϸ� �Ǿ����ϴ�." << endl;
    cout << "������ ����ó ����: " << endl;
    cout << "�̸�: " << controller.getContact().mCont[idx].getName() << endl;
    cout << "��ȭ��ȣ: " << controller.getContact().mCont[idx].getPhoneNumber() << endl;
    cout << "�̸���: " << controller.getContact().mCont[idx].getEmail() << endl;
    cout << "�ּ�: " << controller.getContact().mCont[idx].getAddress() << endl;
    cout << endl;
}

void menuManage::chooseIndexName()
{
    cout << "1. index�� ����ó ��ȸ" << endl;
    cout << "2. �̸����� ����ó ��ȸ" << endl;
    cout << "3. ���� ȭ������" << endl;
    cout << endl;
}

void menuManage::printPersonalContact(PersonalContact aasdsad)
{
    cout << "������ ����ó ����: " << endl;
    cout << "�̸�: " << aasdsad.getName() << endl;
    cout << "��ȭ��ȣ: " << aasdsad.getPhoneNumber() << endl;
    cout << "�̸���: " << aasdsad.getEmail() << endl;
    cout << "�ּ�: " << aasdsad.getAddress() << endl;
    cout << endl;
}


void menuManage::chooseByIndex()
{
    cout << "��ȸ�Ͻ� ����ó�� index�� �Է� �ϼ���: ";

    int idx;
    cin >>  idx;

    //PersonalContact _pcon = controller.getContact().getPersonalContact(idx);
    //// �ε��� ��ȿ������ �ƴϸ�
    //cout << "�ε����� �ʰ� �Ͽ����ϴ�.  size: " << controller.getContact().mCont.size() << ")" << endl;
    //// ����ε� �ε��� 


    PersonalContact _pcon;
    if ( !controller.getContact().getPersonalContact(idx, _pcon) )
    {
        cout << "�ε����� �ʰ� �Ͽ����ϴ�. (size: " << controller.getContact().mCont.size() << ")" << endl;
        return;
    }

    printPersonalContact(_pcon);
}

void menuManage::chooseByName()
{
    cout << "��ȸ �Ͻ� ����ó�� �̸��� �Է� �ϼ���: ";

    string inputName; //��ȸ�� �̸�
    cin >> inputName;


    vector<PersonalContact> vCon = controller.getContact().getPersonalContact(inputName);
    // Vector�� �޾ƿ���,
    // Vector�� �ƹ����� ������, �ش��ϴ� �̸��� �����ϴ� ��ȯ
    // Vector�� ������ ������, Vector ������ŭ ���� ���
    // ���� ��ȸ

    if ( vCon.size() == 0 )
    {
        cout << "�˻��Ͻ� �̸��� ����ó�� �������� �ʽ��ϴ�" << endl;
        return;
    }
 
    for ( int i = 0; i < vCon.size(); i++ )
    {
        printPersonalContact(vCon[i]);
    }
}

void menuManage::eraseContact()
{
    cout << "����� ����ó�� index�� �Է� �ϼ���: ";

    int idx;
    cin >> idx;

    if ( !controller.getContact().erasePersonalContact(idx) )
    {
        cout << "�ε����� �ʰ� �Ͽ����ϴ�. (size: " << controller.getContact().mCont.size() << ")" << endl;
        return;
    }

    cout << "�ε��� (" << idx << ")�� �����Ǿ����ϴ�." <<  endl;
}