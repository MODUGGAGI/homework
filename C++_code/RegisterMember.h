#ifndef REGISTER_MEMBER_H
#define REGISTER_MEMBER_H

#include <map>
#include <string>
#include "Member.h"

// 전방 선언
class RegisterMemberUI;

class RegisterMember {
public:
    // RegisterMember 클래스의 생성자로 UI를 통해 회원가입 프로세스를 시작
    RegisterMember(User* userList[], int& userCount);

    // 새로운 회원을 생성하고 사용자 목록에 추가
    std::map<std::string, std::string> registerNewMember(const std::string& id, const std::string& password, const std::string& phoneNumber,
                           User* userList[], int& userCount);
};

#endif