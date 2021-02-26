#include <iostream>
#include "MenuCommand.h"
using namespace std;

//todo list
//1. 새로운 선언을 함으로써 새로운 객체를 생성하는것과 다른 곳에서 가져와서 쓰는것의 차이 //8. get set 함수의 이해/활용 ***
//2. vector 과 map
//3. vector 과 map 의 활용
//4. 원하는 조건을 만족시키도록 for / while 문 활용하기 (혹은 코드 짜기)  ***
//5. return true/false 활용
//6. 복사 생성자
//7. 함수 오버로딩, 오버라이딩의 차이, 각각 특징
//8. get set 함수의 이해/활용 ***
//9. flag 활용???
//10. void 가 아닌 반환형/인자 함수 짜기 **

int main()
{
    MenuCommand Commander;
    Commander.runMainMenu();
}

// 연락처 수정 -> 초과된 인덱스 입력 오류 출력 해야함 ***
// 연락처 수정 완료 후 삭제로 이동하는 문제 해결 해야함 x
