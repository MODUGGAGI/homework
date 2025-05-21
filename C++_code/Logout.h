#ifndef LOGOUT_H
#define LOGOUT_H

#include "User.h"
#include <string>

class Logout {
public:
    // 생성자에서 참조 매개변수를 통해 ID 전달 - added
    Logout(User*& currentUser, std::string& userId);
};

#endif