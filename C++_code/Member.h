#ifndef MEMBER_H
#define MEMBER_H

#include "User.h"
#include "BicycleCollection.h"
#include <map>
#include <vector>

class Member : public User {
private:
    std::string phoneNumber;
    BicycleCollection bicycleCollection;

public:
    Member();
    Member(const std::string& id, const std::string& pw, const std::string& phoneNum);

    virtual std::map<std::string, std::string> getUserDetails() const;
    void rentBicycle(const Bicycle& bike);
    std::vector<Bicycle*> listBicycles() const;
};

#endif
