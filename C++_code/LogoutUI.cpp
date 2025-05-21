#include "LogoutUI.h"
#include "Logout.h"
#include <iostream>
#include <fstream>

void LogoutUI::startInterface(User*& currentUser) {
    // Logout 컨트롤 객체 생성
    Logout control;
    std::string userId = control.logout(currentUser);

    // 결과 출력
    out_fp << "2.2. 로그아웃" << std::endl;
    out_fp << "> " << userId << std::endl << std::endl;
}