#include "RentBicycle.h"

Bicycle* RentBicycle::rentBicycle(const std::string& bicycleId, Bicycle* bicycleList[], int bicycleCount, Member* member) {
    // 자전거 목록에서 ID를 이용하여 자전거 찾기 - added
    for (int i = 0; i < bicycleCount; i++) {
        auto details = bicycleList[i]->getBicycleDetails();
        if (details["bicycleId"] == bicycleId) {
            // 자전거를 찾았으면 멤버의 rentBicycle 메서드 호출 - added
            member->rentBicycle(*bicycleList[i]);
            return bicycleList[i];
        }
    }
    return nullptr;
}