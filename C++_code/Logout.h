#ifndef LOGOUT_H
#define LOGOUT_H

#include <string>
#include "User.h"

class Logout {
public:
    Logout(User*& currentUser); // Logout 클래스의 생성자로 UI를 통해 로그아웃을 시작
};

#endif