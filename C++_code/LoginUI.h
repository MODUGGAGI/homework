#ifndef LOGIN_UI_H
#define LOGIN_UI_H

#include <string>
#include "User.h"

// ✅ 전방 선언 추가
class Login;

extern std::ifstream in_fp;
extern std::ofstream out_fp;

class LoginUI {
public:
    // ✅ 매개변수 변경
    void startInterface(Login* control, User* userList[], int userCount, User*& currentUser);
    // ✅ 매개변수 변경
    void login(Login* control, const std::string& id, const std::string& password, User* userList[], int userCount, User*& currentUser);
};

#endif