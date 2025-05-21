#include "RegisterBicycle.h"
#include "RegisterBicycleUI.h"

// ✅ 생성자 구현 추가
RegisterBicycle::RegisterBicycle(Bicycle* bicycleList[], int& bicycleCount, User* currentUser) {
    // UI 객체 생성
    RegisterBicycleUI ui;
    // startInterface 호출
    ui.startInterface(this, bicycleList, bicycleCount, currentUser);
}

void RegisterBicycle::registerNewBicycle(const std::string& bicycleId, const std::string& name,
                                         Bicycle* bicycleList[], int& bicycleCount) {
    // 새 자전거 객체 생성
    Bicycle* newBicycle = new Bicycle(bicycleId, name);
    bicycleList[bicycleCount++] = newBicycle;

    // 자전거 정보 가져오기 (Communication Diagram에 따라)
    newBicycle->getBicycleDetails();
}