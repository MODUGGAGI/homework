#ifndef LOGOUT_UI_H
#define LOGOUT_UI_H

#include "User.h"

// ✅ 전방 선언 추가
class Logout;

extern std::ifstream in_fp;
extern std::ofstream out_fp;

class LogoutUI {
public:
    // ✅ 매개변수 변경
    void startInterface(Logout* control, User*& currentUser);
};

#endif