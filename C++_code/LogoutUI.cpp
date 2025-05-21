#include "LogoutUI.h"
#include "Logout.h"
#include <iostream>
#include <fstream>

void LogoutUI::startInterface(User*& currentUser) {
    std::string userId; // 로그 아웃 시 Control class인 Logout 객체로부터 ID값을 받아올 변수

    // Logout 컨트롤 객체 생성
    // 생성자에서 currentUser와 ID를 참조값으로 넘겨서 생성자 내부에서 currentUser의 getUserId() 메소드를 동작시켜 userId에 값을 넣어줄 수 있게 한다.
    Logout control(currentUser, userId);


    // 결과 출력
    out_fp << "2.2. 로그아웃" << std::endl;
    out_fp << "> " << userId << std::endl << std::endl;
}