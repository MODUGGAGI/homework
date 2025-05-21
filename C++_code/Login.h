#ifndef LOGIN_H
#define LOGIN_H

#include "User.h"
#include <string>

class Login {
public:
    // ✅ 생성자 추가
    Login(User* userList[], int userCount, User*& currentUser);

    // 기존 메서드 유지
    User* login(const std::string& id, const std::string& password, User* userList[], int userCount);
};

#endif