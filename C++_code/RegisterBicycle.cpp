#include "RegisterBicycle.h"

void RegisterBicycle::registerNewBicycle(const std::string& bicycleId, const std::string& name,
                                         Bicycle* bicycleList[], int& bicycleCount) {
    // 새 자전거 객체 생성 - added
    Bicycle* newBicycle = new Bicycle(bicycleId, name);
    bicycleList[bicycleCount++] = newBicycle;

    // 자전거 정보 가져오기 (Communication Diagram에 따라) - added
    newBicycle->getBicycleDetails();
}