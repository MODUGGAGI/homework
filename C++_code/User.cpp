#include "User.h"
#include <iostream>

User::User() {}

User::User(const std::string& id, const std::string& pw) : userId(id), password(pw) {}

std::string User::getUserId() const {
    return userId;
}

std::string User::getPassword() const {
    return password;
}