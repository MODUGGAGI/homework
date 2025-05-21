#ifndef LOGIN_H
#define LOGIN_H

#include "User.h"
#include <string>

class Login {
public:
    User* login(const std::string& id, const std::string& password, User* userList[], int userCount);
};

#endif