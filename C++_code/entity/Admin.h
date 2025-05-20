#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"
#include <map>

class Admin : public User {
public:
    Admin();
    Admin(const std::string& id, const std::string& pw);
    std::map<std::string, std::string> getUserDetails() const;
};

#endif
