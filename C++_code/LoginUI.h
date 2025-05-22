#ifndef LOGIN_UI_H
#define LOGIN_UI_H

#include <fstream>
#include <string>
#include "User.h"

// 전방 선언
class Login;

extern std::ifstream in_fp; // main의 입력값을 받아오기 위한 외부 전역 변수
extern std::ofstream out_fp; // main의 입력값을 받아오기 위한 외부 전역 변수

class LoginUI {
public:
    // 로그인 UI 인터페이스를 시작하고 사용자 입력을 받아 처리
    void startInterface(Login* control, User* userList[], int userCount, User*& currentUser);
    // 로그인 처리를 위한 UI 함수, 로그인 처리 후 로그인 결과 출력
    void login(Login* control, const std::string& id, const std::string& password, User* userList[], int userCount, User*& currentUser);
};

#endif