#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>
#include <map>

class Bicycle {
private:
    std::string bicycleId;
    std::string name;

public:
    Bicycle();
    Bicycle(const std::string& id, const std::string& name);

    std::map<std::string, std::string> getBicycleDetails() const;
};

#endif
