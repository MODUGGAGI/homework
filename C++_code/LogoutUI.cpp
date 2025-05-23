#include <iostream>
#include "Logout.h"
#include "LogoutUI.h"

/*
	함수 이름 : LogoutUI::startInterface()
	기능	  : 로그아웃 UI 인터페이스를 시작하고 로그아웃 처리를 수행
	전달 인자 : control -> Logout 컨트롤 객체, currentUser -> 현재 로그인된 사용자
	반환값    : 없음
*/
void LogoutUI::startInterface(const std::string& userId) {

    // 결과 출력
    out_fp << "2.2. 로그아웃" << std::endl;
    out_fp << "> " << userId << std::endl << std::endl;
}