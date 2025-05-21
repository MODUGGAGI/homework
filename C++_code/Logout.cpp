#include "Logout.h"

std::string Logout::logout(User*& currentUser) {
    std::string userId = currentUser->getUserId();
    currentUser = nullptr;
    return userId;
}