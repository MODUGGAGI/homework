#include <iostream>
#include "RegisterMember.h"
#include "RegisterMemberUI.h"

/*
	함수 이름 : RegisterMemberUI::startInterface()
	기능	  : 회원가입 UI 인터페이스를 시작하고 사용자 입력을 받아 처리
	전달 인자 : control -> RegisterMember 컨트롤 객체, userList -> 사용자 목록, userCount -> 사용자 수
	반환값    : 없음
*/
void RegisterMemberUI::startInterface(RegisterMember* control, User* userList[], int& userCount) {
    std::string id, password, phoneNumber;

    // 입력 파일에서 사용자 정보 읽기
    in_fp >> id >> password >> phoneNumber;

    // registerNewMember() 호출해서 회원 등록
    this->registerNewMember(control, id, password, phoneNumber, userList, userCount);
}

/*
	함수 이름 : RegisterMemberUI::registerNewMember()
	기능	  : 새로운 회원을 등록하는 UI 처리 함수
	전달 인자 : control -> RegisterMember 컨트롤 객체, id -> 사용자 ID, password -> 비밀번호, phoneNumber -> 전화번호, userList -> 사용자 목록, userCount -> 사용자 수
	반환값    : 없음
*/
void RegisterMemberUI::registerNewMember(RegisterMember* control, const std::string& id, const std::string& password,
                                         const std::string& phoneNumber, User* userList[], int& userCount) {
    // Control 클래스의 registerNewMember() 호출
    auto map = control->registerNewMember(id, password, phoneNumber, userList,userCount);

    // 결과 출력
    out_fp << "1.1. 회원가입" << std::endl;
    out_fp << "> " << map["id"] << " " << map["password"] << " " << map["phoneNumber"] << std::endl << std::endl;
}