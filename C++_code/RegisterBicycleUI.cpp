#include "RegisterBicycleUI.h"
#include "RegisterBicycle.h"
#include <iostream>
#include <fstream>

void RegisterBicycleUI::startInterface(Bicycle* bicycleList[], int& bicycleCount, User* currentUser) {

    std::string bicycleId, name;

    // 입력 파일에서 자전거 정보 읽기 - added
    in_fp >> bicycleId >> name;

    // 자전거 등록 수행 - added
    registerNewBicycle(bicycleId, name, bicycleList, bicycleCount);
}

void RegisterBicycleUI::registerNewBicycle(const std::string& bicycleId, const std::string& name,
                                           Bicycle* bicycleList[], int& bicycleCount) {
    // RegisterBicycle 컨트롤 객체 생성 - added
    RegisterBicycle control;
    control.registerNewBicycle(bicycleId, name, bicycleList, bicycleCount);

    // 결과 출력 - added
    out_fp << "3.1. 자전거 등록" << std::endl;
    out_fp << "> " << bicycleId << " " << name << std::endl << std::endl;
}