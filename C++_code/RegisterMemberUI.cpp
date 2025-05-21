#include "RegisterMemberUI.h"
#include "RegisterMember.h"
#include <iostream>
#include <fstream>

void RegisterMemberUI::startInterface(User* userList[], int& userCount) {
    std::string id, password, phoneNumber;

    // 입력 파일에서 사용자 정보 읽기
    in_fp >> id >> password >> phoneNumber;

    // 회원 등록 수행
    registerNewMember(id, password, phoneNumber, userList, userCount);
}

void RegisterMemberUI::registerNewMember(const std::string& id, const std::string& password, const std::string& phoneNumber,
                                         User* userList[], int& userCount) {
    // RegisterMember 컨트롤 객체 생성
    RegisterMember control;
    control.registerNewMember(id, password, phoneNumber, userList, userCount);

    // 결과 출력
    out_fp << "1.1. 회원가입" << std::endl;
    out_fp << "> " << id << " " << password << " " << phoneNumber << std::endl << std::endl;
}