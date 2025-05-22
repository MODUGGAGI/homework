#ifndef LOGOUT_H
#define LOGOUT_H

#include "User.h"
#include <string>

class Logout {
public:
    Logout(User*& currentUser); // Logout 클래스의 생성자로 UI를 통해 로그아웃을 시작

    void logout(User*& currentUser, std::string& userId); // 현재 로그인된 사용자를 로그아웃 처리하고 사용자 ID를 반환
};

#endif