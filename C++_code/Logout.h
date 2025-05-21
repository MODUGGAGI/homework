#ifndef LOGOUT_H
#define LOGOUT_H

#include "User.h"
#include <string>

class Logout {
public:
    // ✅ 생성자 변경
    Logout(User*& currentUser);

    // ✅ logout 메서드 추가
    void logout(User*& currentUser, std::string& userId);
};

#endif