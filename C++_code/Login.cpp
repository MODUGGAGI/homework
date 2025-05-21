#include "Login.h"
#include "LoginUI.h"
#include <iostream>
#include <fstream>

extern std::ifstream in_fp;
extern std::ofstream out_fp;

// ✅ 생성자 구현 추가
Login::Login(User* userList[], int userCount, User*& currentUser) {
    // UI 객체 생성
    LoginUI ui;
    // startInterface 호출
    ui.startInterface(this, userList, userCount, currentUser);
}

User* Login::login(const std::string& id, const std::string& password, User* userList[], int userCount) {
    // 사용자 목록에서 ID와 비밀번호가 일치하는 사용자 찾기
    for (int i = 0; i < userCount; i++) {
        if (userList[i]->getUserId() == id && userList[i]->getPassword() == password) {
            return userList[i];
        }
    }
    return nullptr;
}