#ifndef REGISTER_BICYCLE_UI_H
#define REGISTER_BICYCLE_UI_H

#include <string>
#include "User.h"
#include "Bicycle.h"

// 전방 선언
class RegisterBicycle;

extern std::ifstream in_fp; // main의 입력값을 받아오기 위한 외부 전역 변수
extern std::ofstream out_fp; // main의 입력값을 받아오기 위한 외부 전역 변수

class RegisterBicycleUI {
public:
    // 자전거 등록 UI 인터페이스를 시작하고 사용자 입력을 받아 처리
    void startInterface(RegisterBicycle* control, Bicycle* bicycleList[], int& bicycleCount);
    // 새로운 자전거 등록을 위한 UI 처리 함수
    void registerNewBicycle(RegisterBicycle* control, const std::string& bicycleId, const std::string& name,
                            Bicycle* bicycleList[], int& bicycleCount);
};

#endif