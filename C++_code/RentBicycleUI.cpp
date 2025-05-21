#include "RentBicycleUI.h"
#include "RentBicycle.h"
#include <iostream>
#include <fstream>

// ✅ 매개변수 변경
void RentBicycleUI::startInterface(RentBicycle* control, Bicycle* bicycleList[], int bicycleCount, User* currentUser) {
    // 현재 사용자 조회
    Member* member = dynamic_cast<Member*>(currentUser);

    std::string bicycleId;

    // 입력 파일에서 자전거 ID 읽기
    in_fp >> bicycleId;

    // 자전거 대여 수행
    // ✅ 매개변수 변경
    rentBicycle(control, bicycleId, bicycleList, bicycleCount, member);
}

// ✅ 매개변수 변경
void RentBicycleUI::rentBicycle(RentBicycle* control, const std::string& bicycleId, Bicycle* bicycleList[], int bicycleCount, Member* member) {
    // ✅ RentBicycle 객체를 생성하지 않고 매개변수로 받은 객체 사용
    Bicycle* bicycle = control->rentBicycle(bicycleId, bicycleList, bicycleCount, member);

    // 결과 출력
    auto details = bicycle->getBicycleDetails();
    out_fp << "4.1. 자전거 대여" << std::endl;
    out_fp << "> " << details["bicycleId"] << " " << details["name"] << std::endl << std::endl;
}