#include "Member.h"

/*
	함수 이름 : Member::Member()
	기능	  : Member 클래스의 매개변수 생성자로 사용자 ID, 비밀번호, 전화번호를 초기화
	전달 인자 : id -> Member ID, pw -> 비밀번호, phoneNum -> 전화번호
	반환값    : 없음
*/
Member::Member(const std::string& id, const std::string& pw, const std::string& phoneNum)
        : User(id, pw), phoneNumber(phoneNum) {}

/*
	함수 이름 : Member::getUserDetails()
	기능	  : Member의 상세 정보(ID, 비밀번호, 전화번호)를 map 형태로 반환
	전달 인자 : 없음
	반환값    : map<string, string> -> Member의 상세 정보
*/
std::map<std::string, std::string> Member::getUserDetails() const {
    return {
        {"id", userId},
        {"password", password},
        {"phoneNumber", phoneNumber}
    };
}

/*
	함수 이름 : Member::rentBicycle()
	기능	  : 자전거를 대여하여 Member의 자전거 컬렉션에 추가
	전달 인자 : Bicycle -> 대여할 자전거 객체
	반환값    : 없음
*/
void Member::rentBicycle(const Bicycle& bicycle) {
    rentalBicycleCollection.addBicycle(bicycle);
}

/*
	함수 이름 : Member::listBicycles()
	기능	  : Member가 대여한 모든 자전거의 포인터 목록을 반환
	전달 인자 : 없음
	반환값    : vector<Bicycle*> -> 대여한 자전거 포인터 목록
*/
std::vector<Bicycle*> Member::listBicycles() const {
    return rentalBicycleCollection.getAllBicyclePointers();
}