#include "RegisterMemberUI.h"
#include "RegisterMember.h"
#include <iostream>

// 1: startInterface() 구현
void RegisterMemberUI::startInterface(RegisterMember* control, User* userList[], int& userCount) {
    std::string id, password, phoneNumber;

    // 입력 파일에서 사용자 정보 읽기
    in_fp >> id >> password >> phoneNumber;

    // 2: registerNewMember() 호출
    this->registerNewMember(control, id, password, phoneNumber, userList, userCount);
}

// 2: registerNewMember() 구현
void RegisterMemberUI::registerNewMember(RegisterMember* control, const std::string& id, const std::string& password,
                                         const std::string& phoneNumber, User* userList[], int& userCount) {
    // 2.1: Control 클래스의 registerNewMember 호출
    control->registerNewMember(id, password, phoneNumber, userList, userCount);

    // 결과 출력
    out_fp << "1.1. 회원가입" << std::endl;
    out_fp << "> " << id << " " << password << " " << phoneNumber << std::endl << std::endl;
}