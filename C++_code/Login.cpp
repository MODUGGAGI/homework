#include "Login.h"

User* Login::login(const std::string& id, const std::string& password, User* userList[], int userCount) {
    // 사용자 목록에서 ID와 비밀번호가 일치하는 사용자 찾기
    for (int i = 0; i < userCount; i++) {
        if (userList[i]->getUserId() == id && userList[i]->getPassword() == password) {
            return userList[i];
        }
    }
    return nullptr;
}