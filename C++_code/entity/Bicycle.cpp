#include "Bicycle.h"

Bicycle::Bicycle() {}

Bicycle::Bicycle(const std::string& id, const std::string& name)
        : bicycleId(id), name(name) {}

std::map<std::string, std::string> Bicycle::getBicycleDetails() const {
    return {
            {"bicycleId", bicycleId},
            {"name", name}
    };
}