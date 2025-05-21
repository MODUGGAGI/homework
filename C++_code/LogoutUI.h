#ifndef LOGOUT_UI_H
#define LOGOUT_UI_H

#include "User.h"

extern std::ifstream in_fp;
extern std::ofstream out_fp;

class LogoutUI {
public:
    void startInterface(User*& currentUser);
};

#endif