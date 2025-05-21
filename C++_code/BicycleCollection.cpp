#include "BicycleCollection.h"

void BicycleCollection::addBicycle(const Bicycle& bicycle) {
    bicycles.push_back(bicycle);
}

std::vector<Bicycle*> BicycleCollection::getAllBicyclePointers() const {
    std::vector<Bicycle*> result;
    for (auto& bicycle : bicycles) {
        result.push_back(const_cast<Bicycle*>(&bicycle));
    }
    return result;
}