#include "RentBicycleUI.h"
#include "RentBicycle.h"
#include <iostream>
#include <fstream>

void RentBicycleUI::startInterface(Bicycle* bicycleList[], int bicycleCount, User* currentUser) {
    // 현재 사용자 조회
    Member* member = dynamic_cast<Member*>(currentUser);

    std::string bicycleId;

    // 입력 파일에서 자전거 ID 읽기
    in_fp >> bicycleId;

    // 자전거 대여 수행
    rentBicycle(bicycleId, bicycleList, bicycleCount, member);
}

void RentBicycleUI::rentBicycle(const std::string& bicycleId, Bicycle* bicycleList[], int bicycleCount, Member* member) {
    // RentBicycle 컨트롤 객체 생성
    RentBicycle control;
    Bicycle* bicycle = control.rentBicycle(bicycleId, bicycleList, bicycleCount, member);

    // 결과 출력
    auto details = bicycle->getBicycleDetails();
    out_fp << "4.1. 자전거 대여" << std::endl;
    out_fp << "> " << details["bicycleId"] << " " << details["name"] << std::endl << std::endl;
}