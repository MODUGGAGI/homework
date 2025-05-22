#ifndef C__CODE_USER_H
#define C__CODE_USER_H

#include <string>
#include <map>

class User {
protected:
    std::string userId; // 사용자 ID
    std::string password; // 사용자 비밀번호
public:
    User(const std::string& id, const std::string& pw); // User 클래스의 생성자, 매개변수 -> id: 사용자 ID, pw: 비밀번호

    std::string getUserId() const; // 사용자 ID를 반환
    std::string getPassword() const; // 사용자 비밀번호를 반환
    virtual std::map<std::string, std::string> getUserDetails() const = 0; // 사용자 상세 정보를 반환하는 순수 가상 함수 -> 구현체들인 Admin, Member에서 실제 구현
};


#endif
