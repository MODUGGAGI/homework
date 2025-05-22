#ifndef MEMBER_H
#define MEMBER_H

#include "User.h"
#include "BicycleCollection.h"
#include <map>
#include <vector>

class Member : public User {
private:
    std::string phoneNumber; // Member 전화번호
    BicycleCollection bicycleCollection; // Member의 대여한 자전거 컬렉션

public:
    Member(const std::string& id, const std::string& pw, const std::string& phoneNum);
    // Member 클래스의 생성자, 매개변수 -> id: Member ID, pw: 비밀번호, phoneNum: 전화번호

    virtual std::map<std::string, std::string> getUserDetails() const; // Member의 상세 정보를 반환, User의 순수 가상 함수 구현
    void rentBicycle(const Bicycle& bicycle); // 자전거를 대여하여 컬렉션에 추가 -> bicycle: 대여할 자전거 객체
    std::vector<Bicycle*> listBicycles() const; // Member가 대여한 모든 자전거 포인터 목록을 반환
};

#endif
