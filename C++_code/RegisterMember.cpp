#include "RegisterMember.h"
#include "RegisterMemberUI.h"

/*
	함수 이름 : RegisterMember::RegisterMember()
	기능	  : RegisterMember 클래스의 생성자로 UI를 통해 회원가입 프로세스를 시작
	전달 인자 : userList -> 사용자 목록, userCount -> 사용자 수
	반환값    : 없음
*/
RegisterMember::RegisterMember(User* userList[], int& userCount) {
    // UI 객체 생성
    RegisterMemberUI ui;

    // ui의 startInterface() 호출
    ui.startInterface(this, userList, userCount);
}

/*
	함수 이름 : RegisterMember::registerNewMember()
	기능	  : 새로운 회원을 생성하고 사용자 목록에 추가
	전달 인자 : id -> 사용자 ID, password -> 비밀번호, phoneNumber -> 전화번호, userList -> 사용자 목록, userCount -> 사용자 수
	반환값    : 없음
*/
std::map<std::string, std::string> RegisterMember::registerNewMember(const std::string &id, const std::string &password, const std::string &phoneNumber,
                                       User *userList[], int &userCount) {
    // Member 객체 생성
    Member *newMember = new Member(id, password, phoneNumber);

    // Member 객체 저장
    userList[userCount++] = newMember;

    // Member 객체의 getUserDetails() 호출해서 반환
    return newMember->getUserDetails();
}