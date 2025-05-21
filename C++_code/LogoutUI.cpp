#include "LogoutUI.h"
#include "Logout.h"
#include <iostream>
#include <fstream>

// ✅ 매개변수 변경
void LogoutUI::startInterface(Logout* control, User*& currentUser) {
    std::string userId; // 로그 아웃 시 Control class인 Logout 객체로부터 ID값을 받아올 변수

    // ✅ logout 메서드 호출
    control->logout(currentUser, userId);

    // 결과 출력
    out_fp << "2.2. 로그아웃" << std::endl;
    out_fp << "> " << userId << std::endl << std::endl;
}