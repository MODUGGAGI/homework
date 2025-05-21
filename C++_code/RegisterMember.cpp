#include "RegisterMember.h"

void RegisterMember::registerNewMember(const std::string &id, const std::string &password, const std::string &phoneNumber,
                                  User *userList[], int &userCount
                                  ) {
    Member *newMember = new Member(id, password, phoneNumber);
    userList[userCount++] = newMember;
    newMember->getUserDetails();
}