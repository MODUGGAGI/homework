#ifndef LOGIN_UI_H
#define LOGIN_UI_H

#include <string>
#include "User.h"

extern std::ifstream in_fp;
extern std::ofstream out_fp;

class LoginUI {
public:
    void startInterface(User* userList[], int userCount, User*& currentUser);
    void login(const std::string& id, const std::string& password, User* userList[], int userCount, User*& currentUser);
};

#endif