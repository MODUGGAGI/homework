#ifndef LOGOUT_H
#define LOGOUT_H

#include "User.h"

class Logout {
public:
    std::string logout(User*& currentUser);
};

#endif