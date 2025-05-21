#ifndef RENT_BICYCLE_UI_H
#define RENT_BICYCLE_UI_H

#include <string>
#include "User.h"
#include "Member.h"
#include "Bicycle.h"

extern std::ifstream in_fp;
extern std::ofstream out_fp;

class RentBicycleUI {
public:
    void startInterface(Bicycle* bicycleList[], int bicycleCount, User* currentUser);
    void rentBicycle(const std::string& bicycleId, Bicycle* bicycleList[], int bicycleCount, Member* member);
};

#endif