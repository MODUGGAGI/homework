#include "Logout.h"
#include "LogoutUI.h"

/*
	함수 이름 : Logout::Logout()
	기능	  : Logout 클래스의 생성자로 UI를 통해 로그아웃 프로세스를 시작
	전달 인자 : currentUser -> 현재 로그인된 사용자
	반환값    : 없음
*/
Logout::Logout(User*& currentUser) {

    // 로그아웃할 사용자 ID 가져오기
    std::string userId = currentUser->getUserId();

    // 로그아웃 처리, currentUser에 nullptr 할당
    currentUser = nullptr;

    // UI 객체 생성
    LogoutUI ui;

    // ui의 startInterface 호출
    ui.startInterface(userId);
}