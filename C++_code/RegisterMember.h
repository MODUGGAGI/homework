#ifndef REGISTER_MEMBER_H
#define REGISTER_MEMBER_H

#include "Member.h"
#include <string>

class RegisterMember {
public:
    void registerNewMember(const std::string& id, const std::string& password, const std::string& phoneNumber,
                           User* userList[], int& userCount);
};

#endif
