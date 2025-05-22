#ifndef LOGIN_H
#define LOGIN_H

#include "User.h"
#include <string>
#include <map>

class Login {
public:
    // Login 클래스의 생성자로 UI를 통해 로그인을 시작
    Login(User* userList[], int userCount, User*& currentUser);

    // 사용자 ID와 비밀번호를 확인하여 해당 사용자 객체를 반환
    std::map<std::string, std::string> login(const std::string &id, const std::string &password, User *userList[], int userCount, User*& currentUser);
};

#endif