#ifndef RENT_BICYCLE_H
#define RENT_BICYCLE_H

#include "Bicycle.h"
#include "Member.h"
#include <string>

class RentBicycle {
public:
    Bicycle* rentBicycle(const std::string& bicycleId, Bicycle* bicycleList[], int bicycleCount, Member* member);
};

#endif