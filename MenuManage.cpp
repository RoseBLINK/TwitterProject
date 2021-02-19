#include "menuManage.h"
#include <iostream>
#include <string>
#include "owner.h"
#include "contact.h"
using namespace std;

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

}

void menuManage::outputOwnerInfo()
{
    cout << "����� ����" << endl;
    cout << "�̸�: " << controller.getOwner().name << endl;
    cout << "��ȭ��ȣ: " << controller.getOwner().phone_number << endl;
    cout << "�̸���: " << controller.getOwner().email << endl;
    cout << "�ּ�: " << controller.getOwner().address << endl;
    cout << "Ʈ���� ����: " << controller.getOwner().twitter_account << endl;
}

void menuManage::fixOwnerName()
{
    cout << "���� ������ �̸�: " << controller.getOwner().name << endl;
    cout << "� �̸����� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ �̸� �Է�: ";

    string new_name;
    cin >> new_name;

    cout << endl;

    controller.getOwner().name = new_name;

    cout << "������ �Ϸ� �Ǿ����ϴ�." << endl;
    cout << endl;
    cout << "������ ����� ����" << endl;
    cout << "�̸�: " << controller.getOwner().name << endl;
    cout << "��ȭ��ȣ: " << controller.getOwner().phone_number << endl;
    cout << "�̸���: " << controller.getOwner().email << endl;
    cout << "�ּ�: " << controller.getOwner().address << endl;
    cout << "Ʈ���� ����: " << controller.getOwner().twitter_account << endl;
    cout << endl;
}
void menuManage::fixOwnerNumber()
{
    cout << "���� ������ ��ȭ��ȣ: " << controller.getOwner().phone_number << endl;
    cout << "� ��ȭ��ȣ�� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ ��ȭ��ȣ �Է�: ";

    string new_phone_number;
    cin >> new_phone_number;

    cout << endl;

    controller.getOwner().phone_number = new_phone_number;

    cout << "������ �Ϸ� �Ǿ����ϴ�." << endl;
    cout << endl;
    cout << "������ ����� ����" << endl;
    cout << "�̸�: " << controller.getOwner().name << endl;
    cout << "��ȭ��ȣ: " << controller.getOwner().phone_number << endl;
    cout << "�̸���: " << controller.getOwner().email << endl;
    cout << "�ּ�: " << controller.getOwner().address << endl;
    cout << "Ʈ���� ����: " << controller.getOwner().twitter_account << endl;
    cout << endl;
}
void menuManage::fixOwnerEmail()
{
    cout << "���� ������ �̸���: " << controller.getOwner().email << endl;
    cout << "� �̸��Ϸ� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ �̸��� �Է�: ";

    string new_email;
    cin >> new_email;

    cout << endl;

    controller.getOwner().email = new_email;

    cout << "������ �Ϸ� �Ǿ����ϴ�." << endl;
    cout << endl;
    cout << "������ ����� ����" << endl;
    cout << "�̸�: " << controller.getOwner().name << endl;
    cout << "��ȭ��ȣ: " << controller.getOwner().phone_number << endl;
    cout << "�̸���: " << controller.getOwner().email << endl;
    cout << "�ּ�: " << controller.getOwner().address << endl;
    cout << "Ʈ���� ����: " << controller.getOwner().twitter_account << endl;
    cout << endl;
}
void menuManage::fixOwnerAddress()
{
    cout << "���� ������ �ּ�: " << controller.getOwner().address << endl;
    cout << "� �ּҷ� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ �ּ� �Է�: ";

    string new_address;
    cin >> new_address;

    cout << endl;

    controller.getOwner().address = new_address;

    cout << "������ �Ϸ� �Ǿ����ϴ�." << endl;
    cout << endl;
    cout << "������ ����� ����" << endl;
    cout << "�̸�: " << controller.getOwner().name << endl;
    cout << "��ȭ��ȣ: " << controller.getOwner().phone_number << endl;
    cout << "�̸���: " << controller.getOwner().email << endl;
    cout << "�ּ�: " << controller.getOwner().address << endl;
    cout << "Ʈ���� ����: " << controller.getOwner().twitter_account << endl;
    cout << endl;
}
void menuManage::fixOwnerAccount()
{
    cout << "���� ������ ����: " << controller.getOwner().twitter_account << endl;
    cout << "� �������� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ ���� �Է�: ";

    cout << endl;

    string new_account;
    cin >> new_account;

    controller.getOwner().twitter_account = new_account;

    cout << "������ �Ϸ� �Ǿ����ϴ�." << endl;
    cout << endl;
    cout << "������ ����� ����" << endl;
    cout << "�̸�: " << controller.getOwner().name << endl;
    cout << "��ȭ��ȣ: " << controller.getOwner().phone_number << endl;
    cout << "�̸���: " << controller.getOwner().email << endl;
    cout << "�ּ�: " << controller.getOwner().address << endl;
    cout << "Ʈ���� ����: " << controller.getOwner().twitter_account << endl;
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
        cout << i << ": " << "�̸�: " << controller.getContact().cont[i].name << endl;
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
        case 1:// index�� ��ȸ
            chooseByIndex();
            break;
        case 2:// name���� ��ȸ
            chooseByName();
            //�̿ϼ�
            break;
        case 3:
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
}
void menuManage::showOwnerMenu()
{
    cout << "������ ���� ���" << endl;
    cout << "1. ������ ���� �Է�" << endl;
    cout << "2. ������ ���� ��ȸ" << endl;
    cout << "3. ������ ���� ����" << endl;
    cout << "4. ���� ȭ��" << endl;
}

void menuManage::ownerInfoFix() // ownerMenu3
{
    cout << "������ ���� ���� �޴�" << endl;
    cout << "1. ������ �̸� ����" << endl;
    cout << "2. ������ ��ȭ��ȣ ����" << endl;
    cout << "3. ������ �̸��� ����" << endl;
    cout << "4. ������ �ּ� ����" << endl;
    cout << "5. ������ Ʈ���� ���� ����" << endl;
    cout << "6. ���� �޴���" << endl;
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
}

void menuManage::contactFix() //contactMenu4
{
    cout << "1. ����ó �̸� ����" << endl;
    cout << "2. ����ó ��ȭ��ȣ ����" << endl;
    cout << "3. ����ó �̸��� ����" << endl;
    cout << "4. ����ó �ּ� ����" << endl;
    cout << "5. ���� �޴���" << endl;
}

void menuManage::fixContactName()
{

    cout << "���� �Ͻ� ����ó�� index�� �Է� �ϼ���: ";
    int idx;
    cin >> idx;
    
    cout << "�����Ͻ� ����ó(�̸�): " << controller.getContact().mCont[idx].name << endl;
    cout << "� �̸����� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ �̸� �Է�: ";

    string new_name;
    cin >> new_name;

    controller.getContact().mCont[idx].name = new_name;

    cout << "������ �Ϸ� �Ǿ����ϴ�." << endl;
    cout << "������ ����ó ����: " << endl;
    cout << "�̸�: " << controller.getContact().mCont[idx].name << endl;
    cout << "��ȭ��ȣ: " << controller.getContact().mCont[idx].phone_number << endl;
    cout << "�̸���: " << controller.getContact().mCont[idx].email << endl;
    cout << "�ּ�: " << controller.getContact().mCont[idx].address << endl;
}
void menuManage::fixContactNumber()
{
    cout << "���� �Ͻ� ����ó�� index�� �Է� �ϼ���: ";
    int idx;
    cin >> idx;

    PersonalContact _pcon = controller.getContact().getPersonalContact(idx);

    cout << "�����Ͻ� ����ó(��ȭ��ȣ): " << controller.getContact().mCont[idx].phone_number << endl;
    cout << "� ��ȭ��ȣ�� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ ��ȭ��ȣ �Է�: ";

    string new_phone_number;
    cin >> new_phone_number;

    controller.getContact().mCont[idx].phone_number = new_phone_number;

    cout << "������ �Ϸ� �Ǿ����ϴ�." << endl;
    cout << "������ ����ó ����: " << endl;
    cout << "�̸�: " << _pcon.name << endl;
    cout << "��ȭ��ȣ: " << _pcon.phone_number << endl;
    cout << "�̸���: " << _pcon.email << endl;
    cout << "�ּ�: " << _pcon.address << endl;
}
void menuManage::fixContactEmail()
{
    //PersonalContact _pcon = controller.getContact().getPersonalContact(idx);

    cout << "���� �Ͻ� ����ó�� index�� �Է� �ϼ���: ";
    int idx;
    cin >> idx;

    cout << "�����Ͻ� ����ó(�̸���): " << controller.getContact().mCont[idx].email << endl;
    cout << "� �̸��Ϸ� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ �̸��� �Է�: ";

    string new_email;
    cin >> new_email;

    controller.getContact().mCont[idx].email = new_email;

    cout << "������ �Ϸ� �Ǿ����ϴ�." << endl;
    cout << "������ ����ó ����: " << endl;
    cout << "�̸�: " << controller.getContact().mCont[idx].name << endl;
    cout << "��ȭ��ȣ: " << controller.getContact().mCont[idx].phone_number << endl;
    cout << "�̸���: " << controller.getContact().mCont[idx].email << endl;
    cout << "�ּ�: " << controller.getContact().mCont[idx].address << endl;
}
void menuManage::fixContactAddress()
{
    //PersonalContact _pcon = controller.getContact().getPersonalContact(idx);

    cout << "���� �Ͻ� ����ó�� index�� �Է� �ϼ���: ";
    int idx;
    cin >> idx;

    cout << "�����Ͻ� ����ó(�ּ�): " << controller.getContact().mCont[idx].email << endl;
    cout << "� �ּҷ� ���� �Ͻðڽ��ϱ�?" << endl;
    cout << "������ �ּ� �Է�: ";

    string new_address;
    cin >> new_address;

    controller.getContact().mCont[idx].address = new_address;
    
    cout << "������ �Ϸ� �Ǿ����ϴ�." << endl;
    cout << "������ ����ó ����: " << endl;
    cout << "�̸�: " << controller.getContact().mCont[idx].name << endl;
    cout << "��ȭ��ȣ: " << controller.getContact().mCont[idx].phone_number << endl;
    cout << "�̸���: " << controller.getContact().mCont[idx].email << endl;
    cout << "�ּ�: " << controller.getContact().mCont[idx].address << endl;
}

void menuManage::chooseIndexName()
{
    cout << "1. index�� ����ó ��ȸ" << endl;
    cout << "2. �̸����� ����ó ��ȸ" << endl;
    cout << "3. ���� ȭ������" << endl;
}

void menuManage::printPersonalContact(PersonalContact _pcon)
{
    cout << "������ ����ó ����: " << endl;
    cout << "�̸�: " << _pcon.name << endl;
    cout << "��ȭ��ȣ: " << _pcon.phone_number << endl;
    cout << "�̸���: " << _pcon.email << endl;
    cout << "�ּ�: " << _pcon.address << endl;
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

    PersonalContact _pcon = controller.getContact().getPersonalContact(inputName);
    printPersonalContact(_pcon);
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
