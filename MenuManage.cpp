#include "menuManage.h"
#include <iostream>
#include <string>
#include "owner.h"
#include "contact.h"
using namespace std;

void menuManage::inputOwnerInfo()
{
    string name;
    cout << "이름: ";
    cin >> name;

    string phone_number;
    cout << "전화번호: ";
    cin >> phone_number;

    string email;
    cout << "이메일: ";
    cin >> email;

    string address;
    cout << "주소: ";
    cin >> address;

    string twitter_account;
    cout << "트위터 계정: ";
    cin >> twitter_account;

    /*owner daghfdui(name, phone_number, email, address, twitter_account);
    controller.setOwner(daghfdui);*/

    controller.getOwner().insertOwnerInfo(name, phone_number, email, address, twitter_account);

    cout << "입력이 완료 되었습니다." << endl;

}

void menuManage::outputOwnerInfo()
{
    cout << "사용자 정보" << endl;
    cout << "이름: " << controller.getOwner().name << endl;
    cout << "전화번호: " << controller.getOwner().phone_number << endl;
    cout << "이메일: " << controller.getOwner().email << endl;
    cout << "주소: " << controller.getOwner().address << endl;
    cout << "트위터 계정: " << controller.getOwner().twitter_account << endl;
}

void menuManage::fixOwnerName()
{
    cout << "현재 소유자 이름: " << controller.getOwner().name << endl;
    cout << "어떤 이름으로 수정 하시겠습니까?" << endl;
    cout << "수정할 이름 입력: ";

    string new_name;
    cin >> new_name;

    cout << endl;

    controller.getOwner().name = new_name;

    cout << "수정이 완료 되었습니다." << endl;
    cout << endl;
    cout << "수정된 사용자 정보" << endl;
    cout << "이름: " << controller.getOwner().name << endl;
    cout << "전화번호: " << controller.getOwner().phone_number << endl;
    cout << "이메일: " << controller.getOwner().email << endl;
    cout << "주소: " << controller.getOwner().address << endl;
    cout << "트위터 계정: " << controller.getOwner().twitter_account << endl;
    cout << endl;
}
void menuManage::fixOwnerNumber()
{
    cout << "현재 소유자 전화번호: " << controller.getOwner().phone_number << endl;
    cout << "어떤 전화번호로 수정 하시겠습니까?" << endl;
    cout << "수정할 전화번호 입력: ";

    string new_phone_number;
    cin >> new_phone_number;

    cout << endl;

    controller.getOwner().phone_number = new_phone_number;

    cout << "수정이 완료 되었습니다." << endl;
    cout << endl;
    cout << "수정된 사용자 정보" << endl;
    cout << "이름: " << controller.getOwner().name << endl;
    cout << "전화번호: " << controller.getOwner().phone_number << endl;
    cout << "이메일: " << controller.getOwner().email << endl;
    cout << "주소: " << controller.getOwner().address << endl;
    cout << "트위터 계정: " << controller.getOwner().twitter_account << endl;
    cout << endl;
}
void menuManage::fixOwnerEmail()
{
    cout << "현재 소유자 이메일: " << controller.getOwner().email << endl;
    cout << "어떤 이메일로 수정 하시겠습니까?" << endl;
    cout << "수정할 이메일 입력: ";

    string new_email;
    cin >> new_email;

    cout << endl;

    controller.getOwner().email = new_email;

    cout << "수정이 완료 되었습니다." << endl;
    cout << endl;
    cout << "수정된 사용자 정보" << endl;
    cout << "이름: " << controller.getOwner().name << endl;
    cout << "전화번호: " << controller.getOwner().phone_number << endl;
    cout << "이메일: " << controller.getOwner().email << endl;
    cout << "주소: " << controller.getOwner().address << endl;
    cout << "트위터 계정: " << controller.getOwner().twitter_account << endl;
    cout << endl;
}
void menuManage::fixOwnerAddress()
{
    cout << "현재 소유자 주소: " << controller.getOwner().address << endl;
    cout << "어떤 주소로 수정 하시겠습니까?" << endl;
    cout << "수정할 주소 입력: ";

    string new_address;
    cin >> new_address;

    cout << endl;

    controller.getOwner().address = new_address;

    cout << "수정이 완료 되었습니다." << endl;
    cout << endl;
    cout << "수정된 사용자 정보" << endl;
    cout << "이름: " << controller.getOwner().name << endl;
    cout << "전화번호: " << controller.getOwner().phone_number << endl;
    cout << "이메일: " << controller.getOwner().email << endl;
    cout << "주소: " << controller.getOwner().address << endl;
    cout << "트위터 계정: " << controller.getOwner().twitter_account << endl;
    cout << endl;
}
void menuManage::fixOwnerAccount()
{
    cout << "현재 소유자 계정: " << controller.getOwner().twitter_account << endl;
    cout << "어떤 계정으로 수정 하시겠습니까?" << endl;
    cout << "수정할 계정 입력: ";

    cout << endl;

    string new_account;
    cin >> new_account;

    controller.getOwner().twitter_account = new_account;

    cout << "수정이 완료 되었습니다." << endl;
    cout << endl;
    cout << "수정된 사용자 정보" << endl;
    cout << "이름: " << controller.getOwner().name << endl;
    cout << "전화번호: " << controller.getOwner().phone_number << endl;
    cout << "이메일: " << controller.getOwner().email << endl;
    cout << "주소: " << controller.getOwner().address << endl;
    cout << "트위터 계정: " << controller.getOwner().twitter_account << endl;
    cout << endl;
}

void menuManage::addContact()
{
    string name;
    cout << "연락처 이름: ";
    cin >> name;

    string phone_number;
    cout << "연락처 전화번호: ";
    cin >> phone_number;

    string email;
    cout << "연락처 이메일: ";
    cin >> email;

    string address;
    cout << "연락처 주소: ";
    cin >> address;

    controller.getContact().insertContact(name, phone_number, email, address);

    cout << "신규 연락처 추가가 완료 되었습니다." << endl;
    cout << endl;
}

void menuManage::outputContactList()
{
    cout << "저장된 모든 연락처 정보(이름)" << endl;
    for (int i = 0; i < controller.getContact().cont.size(); i++)
    {
        cout << i << ": " << "이름: " << controller.getContact().cont[i].name << endl;
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
        case 1:// index로 조회
            chooseByIndex();
            break;
        case 2:// name으로 조회
            chooseByName();
            //미완성
            break;
        case 3:
            return;
        default:
            cout << "잘못된 입력입니다. 다시 선택 해주세요.";
            break;
        }
    }
}

void menuManage::showMainMenu()
{
    cout << "메인메뉴" << endl;
    cout << "1. 소유자 관리" << endl;
    cout << "2. 연락처 관리" << endl;
    cout << "3. 프로그램 종료" << endl;
}
void menuManage::showOwnerMenu()
{
    cout << "소유자 관리 기능" << endl;
    cout << "1. 소유자 정보 입력" << endl;
    cout << "2. 소유자 정보 조회" << endl;
    cout << "3. 소유자 정보 수정" << endl;
    cout << "4. 이전 화면" << endl;
}

void menuManage::ownerInfoFix() // ownerMenu3
{
    cout << "소유자 정보 수정 메뉴" << endl;
    cout << "1. 소유자 이름 수정" << endl;
    cout << "2. 소유자 전화번호 수정" << endl;
    cout << "3. 소유자 이메일 수정" << endl;
    cout << "4. 소유자 주소 수정" << endl;
    cout << "5. 소유자 트위터 계정 수정" << endl;
    cout << "6. 이전 메뉴로" << endl;
}

void menuManage::showContactMenu()
{
    cout << "연락처 관리 기능" << endl;
    cout << "1. 연락처 추가 입력" << endl;
    cout << "2. 연락처 목록 조회" << endl;
    cout << "3. 연락처 상세 조회" << endl;
    cout << "4. 개별 연락처 수정" << endl;
    cout << "5. 연락처 복사" << endl;
    cout << "6. 개별 연락처 제거" << endl;
    cout << "7. 이전 메뉴로" << endl;
}

void menuManage::contactFix() //contactMenu4
{
    cout << "1. 연락처 이름 수정" << endl;
    cout << "2. 연락처 전화번호 수정" << endl;
    cout << "3. 연락처 이메일 수정" << endl;
    cout << "4. 연락처 주소 수정" << endl;
    cout << "5. 이전 메뉴로" << endl;
}

void menuManage::fixContactName()
{

    cout << "수정 하실 연락처의 index를 입력 하세요: ";
    int idx;
    cin >> idx;
    
    cout << "선택하신 연락처(이름): " << controller.getContact().mCont[idx].name << endl;
    cout << "어떤 이름으로 수정 하시겠습니까?" << endl;
    cout << "수정할 이름 입력: ";

    string new_name;
    cin >> new_name;

    controller.getContact().mCont[idx].name = new_name;

    cout << "수정이 완료 되었습니다." << endl;
    cout << "수정된 연락처 정보: " << endl;
    cout << "이름: " << controller.getContact().mCont[idx].name << endl;
    cout << "전화번호: " << controller.getContact().mCont[idx].phone_number << endl;
    cout << "이메일: " << controller.getContact().mCont[idx].email << endl;
    cout << "주소: " << controller.getContact().mCont[idx].address << endl;
}
void menuManage::fixContactNumber()
{
    cout << "수정 하실 연락처의 index를 입력 하세요: ";
    int idx;
    cin >> idx;

    PersonalContact _pcon = controller.getContact().getPersonalContact(idx);

    cout << "선택하신 연락처(전화번호): " << controller.getContact().mCont[idx].phone_number << endl;
    cout << "어떤 전화번호로 수정 하시겠습니까?" << endl;
    cout << "수정할 전화번호 입력: ";

    string new_phone_number;
    cin >> new_phone_number;

    controller.getContact().mCont[idx].phone_number = new_phone_number;

    cout << "수정이 완료 되었습니다." << endl;
    cout << "수정된 연락처 정보: " << endl;
    cout << "이름: " << _pcon.name << endl;
    cout << "전화번호: " << _pcon.phone_number << endl;
    cout << "이메일: " << _pcon.email << endl;
    cout << "주소: " << _pcon.address << endl;
}
void menuManage::fixContactEmail()
{
    //PersonalContact _pcon = controller.getContact().getPersonalContact(idx);

    cout << "수정 하실 연락처의 index를 입력 하세요: ";
    int idx;
    cin >> idx;

    cout << "선택하신 연락처(이메일): " << controller.getContact().mCont[idx].email << endl;
    cout << "어떤 이메일로 수정 하시겠습니까?" << endl;
    cout << "수정할 이메일 입력: ";

    string new_email;
    cin >> new_email;

    controller.getContact().mCont[idx].email = new_email;

    cout << "수정이 완료 되었습니다." << endl;
    cout << "수정된 연락처 정보: " << endl;
    cout << "이름: " << controller.getContact().mCont[idx].name << endl;
    cout << "전화번호: " << controller.getContact().mCont[idx].phone_number << endl;
    cout << "이메일: " << controller.getContact().mCont[idx].email << endl;
    cout << "주소: " << controller.getContact().mCont[idx].address << endl;
}
void menuManage::fixContactAddress()
{
    //PersonalContact _pcon = controller.getContact().getPersonalContact(idx);

    cout << "수정 하실 연락처의 index를 입력 하세요: ";
    int idx;
    cin >> idx;

    cout << "선택하신 연락처(주소): " << controller.getContact().mCont[idx].email << endl;
    cout << "어떤 주소로 수정 하시겠습니까?" << endl;
    cout << "수정할 주소 입력: ";

    string new_address;
    cin >> new_address;

    controller.getContact().mCont[idx].address = new_address;
    
    cout << "수정이 완료 되었습니다." << endl;
    cout << "수정된 연락처 정보: " << endl;
    cout << "이름: " << controller.getContact().mCont[idx].name << endl;
    cout << "전화번호: " << controller.getContact().mCont[idx].phone_number << endl;
    cout << "이메일: " << controller.getContact().mCont[idx].email << endl;
    cout << "주소: " << controller.getContact().mCont[idx].address << endl;
}

void menuManage::chooseIndexName()
{
    cout << "1. index로 연락처 조회" << endl;
    cout << "2. 이름으로 연락처 조회" << endl;
    cout << "3. 이전 화면으로" << endl;
}

void menuManage::printPersonalContact(PersonalContact _pcon)
{
    cout << "선택한 연락처 정보: " << endl;
    cout << "이름: " << _pcon.name << endl;
    cout << "전화번호: " << _pcon.phone_number << endl;
    cout << "이메일: " << _pcon.email << endl;
    cout << "주소: " << _pcon.address << endl;
}

void menuManage::chooseByIndex()
{
    cout << "조회하실 연락처의 index를 입력 하세요: ";

    int idx;
    cin >>  idx;

    //PersonalContact _pcon = controller.getContact().getPersonalContact(idx);
    //// 인덱스 유효범위가 아니면
    //cout << "인덱스를 초과 하였습니다.  size: " << controller.getContact().mCont.size() << ")" << endl;
    //// 제대로된 인덱스 


    PersonalContact _pcon;
    if ( !controller.getContact().getPersonalContact(idx, _pcon) )
    {
        cout << "인덱스를 초과 하였습니다. (size: " << controller.getContact().mCont.size() << ")" << endl;
        return;
    }

    printPersonalContact(_pcon);
}

void menuManage::chooseByName()
{
    cout << "조회 하실 연락처의 이름을 입력 하세요: ";

    string inputName; //조회할 이름
    cin >> inputName;

    PersonalContact _pcon = controller.getContact().getPersonalContact(inputName);
    printPersonalContact(_pcon);
}

void menuManage::eraseContact()
{
    cout << "지우실 연락처의 index를 입력 하세요: ";

    int idx;
    cin >> idx;

    if ( !controller.getContact().erasePersonalContact(idx) )
    {
        cout << "인덱스를 초과 하였습니다. (size: " << controller.getContact().mCont.size() << ")" << endl;
        return;
    }

    cout << "인덱스 (" << idx << ")가 삭제되었습니다." <<  endl;
}
