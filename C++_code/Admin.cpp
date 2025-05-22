#include "Admin.h"

/*
	함수 이름 : Admin::Admin(const std::string& id, const std::string& pw)
	기능	  : Admin 클래스의 매개변수 생성자로 관리자 ID와 비밀번호를 초기화
	전달 인자 : id -> 관리자 ID, pw -> 비밀번호
	반환값    : 없음
*/
Admin::Admin(const std::string& id, const std::string& pw)
        : User(id, pw) {}

/*
함수 이름 : Admin::getUserDetails()
기능	  : 관리자의 상세 정보(ID, 비밀번호)를 map 형태로 반환
전달 인자 : 없음
반환값    : map<string, string> -> 관리자 상세 정보
*/
std::map<std::string, std::string> Admin::getUserDetails() const {
    return {
            {"id", userId},
            {"password", password}
    };
}