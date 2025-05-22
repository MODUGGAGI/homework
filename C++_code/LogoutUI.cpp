#include "LogoutUI.h"
#include "Logout.h"
#include <iostream>
#include <fstream>

/*
	함수 이름 : LogoutUI::startInterface()
	기능	  : 로그아웃 UI 인터페이스를 시작하고 로그아웃 처리를 수행
	전달 인자 : control -> Logout 컨트롤 객체, currentUser -> 현재 로그인된 사용자
	반환값    : 없음
*/
void LogoutUI::startInterface(Logout* control, User*& currentUser) {
    std::string userId; // 로그 아웃 시 Control class인 Logout 객체로부터 ID값을 받아올 변수

    // logout 메서드 호출, userId의 참조를 전달해서 로그아웃한 사용자의 ID값을 받아옴
    control->logout(currentUser, userId);

    // 결과 출력
    out_fp << "2.2. 로그아웃" << std::endl;
    out_fp << "> " << userId << std::endl << std::endl;
}