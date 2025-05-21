#include "RegisterBicycleUI.h"
#include "RegisterBicycle.h"
#include <iostream>
#include <fstream>

// ✅ 매개변수 변경
void RegisterBicycleUI::startInterface(RegisterBicycle* control, Bicycle* bicycleList[], int& bicycleCount, User* currentUser) {
    std::string bicycleId, name;

    // 입력 파일에서 자전거 정보 읽기
    in_fp >> bicycleId >> name;

    // 자전거 등록 수행
    // ✅ 매개변수 변경
    registerNewBicycle(control, bicycleId, name, bicycleList, bicycleCount);
}

// ✅ 매개변수 변경
void RegisterBicycleUI::registerNewBicycle(RegisterBicycle* control, const std::string& bicycleId, const std::string& name,
                                           Bicycle* bicycleList[], int& bicycleCount) {
    // ✅ RegisterBicycle 객체를 생성하지 않고 매개변수로 받은 객체 사용
    control->registerNewBicycle(bicycleId, name, bicycleList, bicycleCount);

    // 결과 출력
    out_fp << "3.1. 자전거 등록" << std::endl;
    out_fp << "> " << bicycleId << " " << name << std::endl << std::endl;
}