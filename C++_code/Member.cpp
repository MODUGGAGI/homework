#include "Member.h"

Member::Member() {}

Member::Member(const std::string& id, const std::string& pw, const std::string& phoneNum)
        : User(id, pw), phoneNumber(phoneNum) {}

std::map<std::string, std::string> Member::getUserDetails() const {
    return {
        {"id", userId},
        {"password", password},
        {"phoneNumber", phoneNumber}
    };
}

void Member::rentBicycle(const Bicycle& bike) {
    bicycleCollection.addBicycle(bike);
}

std::vector<Bicycle*> Member::listBicycles() const {
    return bicycleCollection.getAllBicyclePointers();
}