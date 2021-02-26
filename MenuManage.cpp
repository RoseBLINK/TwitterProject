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
    cout << "잘못된 입력입니다. 다시 선택 해주세요.";
    cout << endl;
}

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
    cout << endl;

}

void menuManage::outputOwnerInfo()
{
    cout << "사용자 정보" << endl;
    cout << "이름: " << controller.getOwner().getName() << endl;
    cout << "전화번호: " << controller.getOwner().getPhoneNumber() << endl;
    cout << "이메일: " << controller.getOwner().getEmail() << endl;
    cout << "주소: " << controller.getOwner().getAddress() << endl;
    cout << "트위터 계정: " << controller.getOwner().getTwitterAccount() << endl;
    cout << endl;
}

void menuManage::fixOwnerName()
{
    cout << "현재 소유자 이름: " << controller.getOwner().getName() << endl;
    cout << "어떤 이름으로 수정 하시겠습니까?" << endl;
    cout << "수정할 이름 입력: ";
    cout << endl;

    string new_name;
    cin >> new_name;

    cout << endl;

    controller.getOwner().getName() = new_name;

    cout << "수정이 완료 되었습니다." << endl;
    cout << endl;
    cout << "수정된 사용자 정보" << endl;
    cout << "이름: " << controller.getOwner().getName() << endl;
    cout << "전화번호: " << controller.getOwner().getPhoneNumber() << endl;
    cout << "이메일: " << controller.getOwner().getEmail() << endl;
    cout << "주소: " << controller.getOwner().getAddress() << endl;
    cout << "트위터 계정: " << controller.getOwner().getTwitterAccount() << endl;
    cout << endl;
}

void menuManage::fixOwnerNumber()
{
    cout << "현재 소유자 전화번호: " << controller.getOwner().getPhoneNumber() << endl;
    cout << "어떤 전화번호로 수정 하시겠습니까?" << endl;
    cout << "수정할 전화번호 입력: ";

    string new_phone_number;
    cin >> new_phone_number;

    cout << endl;

    controller.getOwner().getPhoneNumber() = new_phone_number;

    cout << "수정이 완료 되었습니다." << endl;
    cout << endl;
    cout << "수정된 사용자 정보" << endl;
    cout << "이름: " << controller.getOwner().getName() << endl;
    cout << "전화번호: " << controller.getOwner().getPhoneNumber() << endl;
    cout << "이메일: " << controller.getOwner().getEmail() << endl;
    cout << "주소: " << controller.getOwner().getAddress() << endl;
    cout << "트위터 계정: " << controller.getOwner().getTwitterAccount() << endl;
    cout << endl;
}

void menuManage::fixOwnerEmail()
{
    cout << "현재 소유자 이메일: " << controller.getOwner().getEmail() << endl;
    cout << "어떤 이메일로 수정 하시겠습니까?" << endl;
    cout << "수정할 이메일 입력: ";

    string new_email;
    cin >> new_email;

    cout << endl;

    controller.getOwner().getEmail() = new_email;

    cout << "수정이 완료 되었습니다." << endl;
    cout << endl;
    cout << "수정된 사용자 정보" << endl;
    cout << "이름: " << controller.getOwner().getName() << endl;
    cout << "전화번호: " << controller.getOwner().getPhoneNumber() << endl;
    cout << "이메일: " << controller.getOwner().getEmail() << endl;
    cout << "주소: " << controller.getOwner().getAddress() << endl;
    cout << "트위터 계정: " << controller.getOwner().getTwitterAccount() << endl;
    cout << endl;
}
void menuManage::fixOwnerAddress()
{
    cout << "현재 소유자 주소: " << controller.getOwner().getAddress() << endl;
    cout << "어떤 주소로 수정 하시겠습니까?" << endl;
    cout << "수정할 주소 입력: ";

    string new_address;
    cin >> new_address;

    cout << endl;

    controller.getOwner().getAddress() = new_address;

    cout << "수정이 완료 되었습니다." << endl;
    cout << endl;
    cout << "수정된 사용자 정보" << endl;
    cout << "이름: " << controller.getOwner().getName() << endl;
    cout << "전화번호: " << controller.getOwner().getPhoneNumber() << endl;
    cout << "이메일: " << controller.getOwner().getEmail() << endl;
    cout << "주소: " << controller.getOwner().getAddress() << endl;
    cout << "트위터 계정: " << controller.getOwner().getTwitterAccount() << endl;
    cout << endl;
}
void menuManage::fixOwnerAccount()
{
    cout << "현재 소유자 계정: " << controller.getOwner().getTwitterAccount() << endl;
    cout << "어떤 계정으로 수정 하시겠습니까?" << endl;
    cout << "수정할 계정 입력: ";

    cout << endl;

    string new_account;
    cin >> new_account;

    controller.getOwner().getTwitterAccount() = new_account;

    cout << "수정이 완료 되었습니다." << endl;
    cout << endl;
    cout << "수정된 사용자 정보" << endl;
    cout << "이름: " << controller.getOwner().getName() << endl;
    cout << "전화번호: " << controller.getOwner().getPhoneNumber() << endl;
    cout << "이메일: " << controller.getOwner().getEmail() << endl;
    cout << "주소: " << controller.getOwner().getAddress() << endl;
    cout << "트위터 계정: " << controller.getOwner().getTwitterAccount() << endl;
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
        cout << i << ": " << "이름: " << controller.getContact().cont[i].getName() << endl;
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
        case searchByIndex:// index로 조회
            chooseByIndex();
            break;
        case searchByName:// name으로 조회
            chooseByName();
            //미완성
            break;
        case previous:
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
    cout << endl;
}

void menuManage::showOwnerMenu()
{
    cout << "소유자 관리 기능" << endl;
    cout << "1. 소유자 정보 입력" << endl;
    cout << "2. 소유자 정보 조회" << endl;
    cout << "3. 소유자 정보 수정" << endl;
    cout << "4. 이전 화면" << endl;
    cout << endl;
}

void menuManage::showOwnerInfoFix() // ownerMenu3
{
    cout << "소유자 정보 수정 메뉴" << endl;
    cout << "1. 소유자 이름 수정" << endl;
    cout << "2. 소유자 전화번호 수정" << endl;
    cout << "3. 소유자 이메일 수정" << endl;
    cout << "4. 소유자 주소 수정" << endl;
    cout << "5. 소유자 트위터 계정 수정" << endl;
    cout << "6. 이전 메뉴로" << endl;
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

void menuManage::chooseFixMenu(int _input) //cin이 아닌 함수 인자로 받도록 고쳐보기
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
        cout << "잘못된 입력입니다. 다시 선택 해주세요.";
        cout << endl;
        break;
    }
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
    cout << endl;
}

void menuManage::showContactFix() //contactMenu4
{
    cout << "1. 연락처 이름 수정" << endl;
    cout << "2. 연락처 전화번호 수정" << endl;
    cout << "3. 연락처 이메일 수정" << endl;
    cout << "4. 연락처 주소 수정" << endl;
    cout << "5. 이전 메뉴로" << endl;
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
        cout << "잘못된 입력입니다. 다시 선택 해주세요.";
        cout << endl;
        break;
    }
}

void menuManage::fixContactName()
{

    cout << "수정 하실 연락처의 index를 입력 하세요: ";
    int idx;
    cin >> idx;

    // 테스팅
    PersonalContact sCont;
    bool bNormal = controller.getContact().getPersonalContact(idx, sCont);
    if ( !bNormal )
    {
        cout << "잘못된 값을 입력하셨습니다";
        cout << endl;
        return;
    }

    cout << "선택하신 연락처(이름): " << sCont.getName() << endl;
    cout << "어떤 이름으로 수정 하시겠습니까?" << endl;
    cout << "수정할 이름 입력: ";

    string new_name;
    cin >> new_name;
    cout << endl;

    sCont.getName() = new_name;
    bool bName = controller.getContact().setPersonalContact(idx, sCont);

    if ( !bName )
    {
        cout << "이름 수정을 실패했습니다" << endl;
        return;
    }

    printPersonalContact(sCont);
}

void menuManage::fixContactNumber()
{
    cout << "수정 하실 연락처의 index를 입력 하세요: ";
    int idx;
    cin >> idx;
    cout << endl;

    //// 1. 함수를 이용한 예외처리
    //bool bValid = controller.getContact().isValid(idx);
    //if ( !bValid )
    //{
    //    cout <<"잘못된 값을 입력~~";
    //    return;
    //}

    //PersonalContact _pcon = controller.getContact().getPersonalContact(idx);


    // 2. getPersonalContact에서 값 채워 나오기 (함수 안에 예외처리까지 포함)
    PersonalContact sCont;
    bool bNormal = controller.getContact().getPersonalContact(idx, sCont);
    if ( !bNormal )
    {
        cout << "잘못된 값을 입력하셨습니다.";
        cout << endl;
        return;
    }


    cout << "선택하신 연락처(전화번호): " << sCont.getPhoneNumber() << endl;
    cout << "어떤 전화번호로 수정 하시겠습니까?" << endl;
    cout << "수정할 전화번호 입력: ";

    string new_phone_number;
    cin >> new_phone_number;
    cout << endl;

    sCont.getPhoneNumber() = new_phone_number;
    bool bNum = controller.getContact().setPersonalContact(idx, sCont);

    if ( !bNum )
    {
        cout << "전화번호 수정을 실패했습니다. " << endl;
        return;
    }

    cout << "수정이 완료 되었습니다." << endl;
    cout << "수정된 연락처 정보: " << endl;

    printPersonalContact(sCont);
}

void menuManage::fixContactEmail()
{
    //PersonalContact _pcon = controller.getContact().getPersonalContact(idx);

    cout << "수정 하실 연락처의 index를 입력 하세요: ";
    int idx;
    cin >> idx;

    PersonalContact sCont;
    bool bNormal = controller.getContact().getPersonalContact(idx, sCont);
    if ( !bNormal )
    {
        cout << "잘못된 값을 입력하셨습니다";
        cout << endl;
        return;
    }

    cout << "선택하신 연락처(이메일): " << controller.getContact().mCont[idx].getEmail() << endl;
    cout << "어떤 이메일로 수정 하시겠습니까?" << endl;
    cout << "수정할 이메일 입력: ";

    string new_email;
    cin >> new_email;

    controller.getContact().mCont[idx].getEmail() = new_email;

    cout << "수정이 완료 되었습니다." << endl;
    cout << "수정된 연락처 정보: " << endl;
    cout << "이름: " << controller.getContact().mCont[idx].getName() << endl;
    cout << "전화번호: " << controller.getContact().mCont[idx].getPhoneNumber() << endl;
    cout << "이메일: " << controller.getContact().mCont[idx].getEmail() << endl;
    cout << "주소: " << controller.getContact().mCont[idx].getAddress() << endl;
    cout << endl;
}
void menuManage::fixContactAddress()
{
    //PersonalContact _pcon = controller.getContact().getPersonalContact(idx);

    cout << "수정 하실 연락처의 index를 입력 하세요: ";
    int idx;
    cin >> idx;

    PersonalContact sCont;
    bool bNormal = controller.getContact().getPersonalContact(idx, sCont);
    if ( !bNormal )
    {
        cout << "잘못된 값을 입력하셨습니다";
        cout << endl;
        return;
    }

    cout << "선택하신 연락처(주소): " << controller.getContact().mCont[idx].getEmail() << endl;
    cout << "어떤 주소로 수정 하시겠습니까?" << endl;
    cout << "수정할 주소 입력: ";

    string new_address;
    cin >> new_address;

    controller.getContact().mCont[idx].getAddress() = new_address;
    
    cout << "수정이 완료 되었습니다." << endl;
    cout << "수정된 연락처 정보: " << endl;
    cout << "이름: " << controller.getContact().mCont[idx].getName() << endl;
    cout << "전화번호: " << controller.getContact().mCont[idx].getPhoneNumber() << endl;
    cout << "이메일: " << controller.getContact().mCont[idx].getEmail() << endl;
    cout << "주소: " << controller.getContact().mCont[idx].getAddress() << endl;
    cout << endl;
}

void menuManage::chooseIndexName()
{
    cout << "1. index로 연락처 조회" << endl;
    cout << "2. 이름으로 연락처 조회" << endl;
    cout << "3. 이전 화면으로" << endl;
    cout << endl;
}

void menuManage::printPersonalContact(PersonalContact aasdsad)
{
    cout << "선택한 연락처 정보: " << endl;
    cout << "이름: " << aasdsad.getName() << endl;
    cout << "전화번호: " << aasdsad.getPhoneNumber() << endl;
    cout << "이메일: " << aasdsad.getEmail() << endl;
    cout << "주소: " << aasdsad.getAddress() << endl;
    cout << endl;
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


    vector<PersonalContact> vCon = controller.getContact().getPersonalContact(inputName);
    // Vector로 받아오고,
    // Vector에 아무내용 없으면, 해당하는 이름이 없습니다 반환
    // Vector에 내용이 있으면, Vector 개수만큼 정보 출력
    // 벡터 순회

    if ( vCon.size() == 0 )
    {
        cout << "검색하신 이름의 연락처가 존재하지 않습니다" << endl;
        return;
    }
 
    for ( int i = 0; i < vCon.size(); i++ )
    {
        printPersonalContact(vCon[i]);
    }
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