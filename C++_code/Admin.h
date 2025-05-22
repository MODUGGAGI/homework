#ifndef ADMIN_H
#define ADMIN_H

#include <map>
#include "User.h"

class Admin : public User {
public:
    Admin(const std::string& id, const std::string& password); // Admin 클래스의 생성자, 매개변수 -> id: 관리자 ID, password: 비밀번호
    std::map<std::string, std::string> getUserDetails() const; // 관리자의 상세 정보를 반환
};

#endif
