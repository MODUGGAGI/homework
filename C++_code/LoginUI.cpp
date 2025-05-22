#include <iostream>
#include "Login.h"
#include "LoginUI.h"

/*
	함수 이름 : LoginUI::startInterface()
	기능	  : 로그인 UI 인터페이스를 시작하고 사용자 입력을 받아 처리
	전달 인자 : control -> Login 컨트롤 객체, userList -> 사용자 목록, userCount -> 사용자 수, currentUser -> 현재 로그인된 사용자
	반환값    : 없음
*/
void LoginUI::startInterface(Login* control, User* userList[], int userCount, User*& currentUser) {
    std::string id, password;

    // 입력 파일에서 사용자 정보 읽기
    in_fp >> id >> password;

    // 로그인 수행
    login(control, id, password, userList, userCount, currentUser);
}

/*
	함수 이름 : LoginUI::login()
	기능	  : 로그인 처리를 위한 UI 함수
	전달 인자 : control -> Login 컨트롤 객체, id -> 사용자 ID, password -> 비밀번호, userList -> 사용자 목록, userCount -> 사용자 수, currentUser -> 현재 로그인된 사용자 저장
	반환값    : 없음
*/
void LoginUI::login(Login* control, const std::string& id, const std::string& password, User* userList[], int userCount, User*& currentUser) {
    //컨트롤 객체를 통해 로그인 진행
    auto map = control->login(id, password, userList, userCount, currentUser);

    // 결과 출력
    out_fp << "2.1. 로그인" << std::endl;
    out_fp << "> " << map["id"] << " " << map["password"] << std::endl << std::endl;
}