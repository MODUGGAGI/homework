#include "Admin.h"

Admin::Admin() {}

Admin::Admin(const std::string& id, const std::string& pw)
        : User(id, pw) {}

std::map<std::string, std::string> Admin::getUserDetails() const {
    return {
            {"id", userId},
            {"password", password}
    };
}