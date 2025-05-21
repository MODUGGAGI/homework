#include "LoginUI.h"
#include "Login.h"
#include <iostream>
#include <fstream>

// ✅ 매개변수 변경
void LoginUI::startInterface(Login* control, User* userList[], int userCount, User*& currentUser) {
    std::string id, password;

    // 입력 파일에서 사용자 정보 읽기
    in_fp >> id >> password;

    // 로그인 수행
    // ✅ 매개변수 변경
    login(control, id, password, userList, userCount, currentUser);
}

// ✅ 매개변수 변경
void LoginUI::login(Login* control, const std::string& id, const std::string& password, User* userList[], int userCount, User*& currentUser) {
    // ✅ Login 객체를 생성하지 않고 매개변수로 받은 객체 사용
    currentUser = control->login(id, password, userList, userCount);

    // 결과 출력
    out_fp << "2.1. 로그인" << std::endl;
    out_fp << "> " << id << " " << password << std::endl << std::endl;
}