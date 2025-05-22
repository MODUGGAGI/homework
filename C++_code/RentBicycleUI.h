#ifndef RENT_BICYCLE_UI_H
#define RENT_BICYCLE_UI_H

#include <string>
#include "User.h"
#include "Member.h"
#include "Bicycle.h"

// 전방 선언
class RentBicycle;

extern std::ifstream in_fp; // main의 입력값을 받아오기 위한 외부 전역 변수
extern std::ofstream out_fp; // main의 입력값을 받아오기 위한 외부 전역 변수

class RentBicycleUI {
public:
    // 자전거 대여 UI 인터페이스를 시작하고 사용자 입력을 받아 처리
    void startInterface(RentBicycle* control, Bicycle* bicycleList[], int bicycleCount, Member* currentUser);
    // 자전거 대여를 위한 UI 처리 함수
    void rentBicycle(RentBicycle* control, const std::string& bicycleId, Bicycle* bicycleList[], int bicycleCount, Member* currentUser);
};

#endif