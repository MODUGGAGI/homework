#include "Logout.h"
#include "LogoutUI.h"

// ✅ 생성자 구현 변경
Logout::Logout(User*& currentUser) {
    // UI 객체 생성
    LogoutUI ui;
    // startInterface 호출
    ui.startInterface(this, currentUser);
}

// ✅ logout 메서드 구현
void Logout::logout(User*& currentUser, std::string& userId) {
    // User에서 ID 가져와서 참조 매개변수에 할당
    userId = currentUser->getUserId();
    // 로그아웃 처리
    currentUser = nullptr;
}