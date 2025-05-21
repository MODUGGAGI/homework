#ifndef REGISTER_MEMBER_UI_H
#define REGISTER_MEMBER_UI_H

#include <string>
#include "User.h"
#include <fstream>

// 전방 선언
class RegisterMember;

extern std::ifstream in_fp;
extern std::ofstream out_fp;

class RegisterMemberUI {
public:
    // 1: startInterface() 메소드
    void startInterface(RegisterMember* control, User* userList[], int& userCount);

    // 2: registerNewMember() 메소드
    void registerNewMember(RegisterMember* control, const std::string& id, const std::string& password,
                           const std::string& phoneNumber, User* userList[], int& userCount);
};

#endif