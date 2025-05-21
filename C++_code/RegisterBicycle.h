#ifndef REGISTER_BICYCLE_H
#define REGISTER_BICYCLE_H

#include "Bicycle.h"
#include <string>

class RegisterBicycle {
public:
    void registerNewBicycle(const std::string& bicycleId, const std::string& name,
                            Bicycle* bicycleList[], int& bicycleCount);
};

#endif