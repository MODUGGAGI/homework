#ifndef REGISTER_MEMBER_UI_H
#define REGISTER_MEMBER_UI_H

#include <fstream>
#include <string>
#include "User.h"

// 전방 선언
class RegisterMember;

extern std::ifstream in_fp; // main의 입력값을 받아오기 위한 외부 전역 변수
extern std::ofstream out_fp; // main의 입력값을 받아오기 위한 외부 전역 변수

class RegisterMemberUI {
public:
    // 회원가입 UI 인터페이스를 시작하고 사용자 입력을 받아 처리
    void startInterface(RegisterMember* control, User* userList[], int& userCount);

    // 새로운 회원 등록을 위한 UI 처리 함수
    void registerNewMember(RegisterMember* control, const std::string& id, const std::string& password,
                           const std::string& phoneNumber, User* userList[], int& userCount);
};

#endif