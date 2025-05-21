#ifndef REGISTER_MEMBER_UI_H
#define REGISTER_MEMBER_UI_H

#include <string>
#include "User.h"

extern std::ifstream in_fp;
extern std::ofstream out_fp;

class RegisterMemberUI {
public:
    void startInterface(User* userList[], int& userCount);
    void registerNewMember(const std::string& id, const std::string& password, const std::string& phoneNumber,
                           User* userList[], int& userCount);
};

#endif
