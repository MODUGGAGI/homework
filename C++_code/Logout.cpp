#include "Logout.h"

// 생성자에서 User의 ID를 가져와 참조 매개변수에 저장 - added
Logout::Logout(User*& currentUser, std::string& userId) {
    // User에서 ID 가져와서 참조 매개변수에 할당
    userId = currentUser->getUserId();

    // 로그아웃 처리
    currentUser = nullptr;
}