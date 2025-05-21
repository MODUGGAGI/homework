#include "LoginUI.h"
#include "Login.h"
#include <iostream>
#include <fstream>

void LoginUI::startInterface(User* userList[], int userCount, User*& currentUser) {
    std::string id, password;

    // 입력 파일에서 사용자 정보 읽기
    in_fp >> id >> password;

    // 로그인 수행
    login(id, password, userList, userCount, currentUser);
}

void LoginUI::login(const std::string& id, const std::string& password, User* userList[], int userCount, User*& currentUser) {
    // Login 컨트롤 객체 생성
    Login control;
    currentUser = control.login(id, password, userList, userCount);

    // 결과 출력
    out_fp << "2.1. 로그인" << std::endl;
    out_fp << "> " << id << " " << password << std::endl << std::endl;
}