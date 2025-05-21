#include "RentBicycle.h"
#include "RentBicycleUI.h"

// ✅ 생성자 구현 추가
RentBicycle::RentBicycle(Bicycle* bicycleList[], int bicycleCount, User* currentUser) {
    // UI 객체 생성
    RentBicycleUI ui;
    // startInterface 호출
    ui.startInterface(this, bicycleList, bicycleCount, currentUser);
}

Bicycle* RentBicycle::rentBicycle(const std::string& bicycleId, Bicycle* bicycleList[], int bicycleCount, Member* member) {
    // 자전거 목록에서 ID를 이용하여 자전거 찾기
    for (int i = 0; i < bicycleCount; i++) {
        auto details = bicycleList[i]->getBicycleDetails();
        if (details["bicycleId"] == bicycleId) {
            // 자전거를 찾았으면 멤버의 rentBicycle 메서드 호출
            member->rentBicycle(*bicycleList[i]);
            return bicycleList[i];
        }
    }
    return nullptr;
}