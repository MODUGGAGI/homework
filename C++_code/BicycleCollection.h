#ifndef BICYCLE_COLLECTION_H
#define BICYCLE_COLLECTION_H

#include <vector>
#include "Bicycle.h"

class BicycleCollection {
private:
    std::vector<Bicycle> bicycles;

public:
    void addBicycle(const Bicycle& bike);
    std::vector<Bicycle*> getAllBicyclePointers() const;
};

#endif