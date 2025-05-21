#include "ViewRentalInfoUI.h"
#include "ViewRentalInfo.h"
#include "Member.h"
#include <iostream>
#include <fstream>

void ViewRentalInfoUI::startInterface(User* currentUser) {
    // 일반 회원(Member)만 대여 정보 조회 가능
    Member* member = dynamic_cast<Member*>(currentUser);

    // ViewRentalInfo 컨트롤 객체 생성
    ViewRentalInfo control;
    std::vector<Bicycle*> bicycles = control.viewRentalInfo(member);

    // 결과 출력
    out_fp << "5.1. 자전거 대여 리스트" << std::endl;
    for (Bicycle* bicycle : bicycles) {
        auto details = bicycle->getBicycleDetails();
        out_fp << "> " << details["bicycleId"] << " " << details["name"] << std::endl;
    }
    out_fp << std::endl;
}