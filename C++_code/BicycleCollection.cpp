#include "BicycleCollection.h"

void BicycleCollection::addBicycle(const Bicycle& bike) {
    bicycles.push_back(bike);
}

std::vector<Bicycle*> BicycleCollection::getAllBicyclePointers() const {
    std::vector<Bicycle*> result;
    for (auto& bike : bicycles) {
//        result.push_back(&bike);
    }
    return result;
}