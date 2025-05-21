#include "RegisterMember.h"
#include "RegisterMemberUI.h"

RegisterMember::RegisterMember(User* userList[], int& userCount) {
    // UI 객체 생성
    RegisterMemberUI ui;

    // 1: startInterface() 호출
    ui.startInterface(this, userList, userCount);
}

// 2.1: registerNewMember() 구현
void RegisterMember::registerNewMember(const std::string &id, const std::string &password, const std::string &phoneNumber,
                                       User *userList[], int &userCount) {
    // 2.1.1: Member 객체 생성
    Member *newMember = new Member(id, password, phoneNumber);
    userList[userCount++] = newMember;

    // 2.1.2: Member 객체의 getUserDetails() 호출
    newMember->getUserDetails();
}