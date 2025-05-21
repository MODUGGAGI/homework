#ifndef REGISTER_BICYCLE_UI_H
#define REGISTER_BICYCLE_UI_H

#include <string>
#include "User.h"
#include "Bicycle.h"

extern std::ifstream in_fp;
extern std::ofstream out_fp;

class RegisterBicycleUI {
public:
    void startInterface(Bicycle* bicycleList[], int& bicycleCount, User* currentUser);
    void registerNewBicycle(const std::string& bicycleId, const std::string& name,
                            Bicycle* bicycleList[], int& bicycleCount);
};

#endif