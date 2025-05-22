#ifndef LOGOUT_UI_H
#define LOGOUT_UI_H

#include "User.h"

// 전방 선언
class Logout;

extern std::ifstream in_fp; // main의 입력값을 받아오기 위한 외부 전역 변수
extern std::ofstream out_fp; // main의 입력값을 받아오기 위한 외부 전역 변수

class LogoutUI {
public:
    void startInterface(Logout* control, User*& currentUser); // 로그아웃 UI 인터페이스, 로그아웃 처리를 수행하고 수행 결과를 출력
};

#endif