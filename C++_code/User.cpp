#include "User.h"

/*
	함수 이름 : User::User()
	기능	  : User 클래스의 매개변수 생성자로 사용자 ID와 비밀번호를 초기화
	전달 인자 : id -> 사용자 ID, password -> 비밀번호
	반환값    : 없음
*/
User::User(const std::string& id, const std::string& password) : userId(id), password(password) {}

/*
	함수 이름 : User::getUserId()
	기능	  : 사용자 ID를 반환
	전달 인자 : 없음
	반환값    : string -> 사용자 ID
*/
std::string User::getUserId() const {
    return userId;
}

/*
	함수 이름 : User::getPassword()
	기능	  : 사용자 비밀번호를 반환
	전달 인자 : 없음
	반환값    : string -> 사용자 비밀번호
*/
std::string User::getPassword() const {
    return password;
}