#ifndef REGISTER_MEMBER_H
#define REGISTER_MEMBER_H

#include "Member.h"
#include <string>

// 전방 선언
class RegisterMemberUI;

class RegisterMember {
public:
    // 생성자
    RegisterMember(User* userList[], int& userCount);

    // 2.1: registerNewMember() 메소드
    void registerNewMember(const std::string& id, const std::string& password, const std::string& phoneNumber,
                           User* userList[], int& userCount);
};

#endif