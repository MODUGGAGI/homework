#include "ViewRentalInfoUI.h"
#include "ViewRentalInfo.h"
#include "Member.h"
#include <iostream>
#include <fstream>
#include <vector>

// ✅ 매개변수 변경
void ViewRentalInfoUI::startInterface(ViewRentalInfo* control, User* currentUser) {
    // 일반 회원(Member)만 대여 정보 조회 가능
    Member* member = dynamic_cast<Member*>(currentUser);

    // 자전거 목록을 저장할 변수
    std::vector<Bicycle*> bicycles;

    // ✅ 메서드 호출 변경
    control->viewRentalInfo(member, bicycles);

    // 결과 출력
    out_fp << "5.1. 자전거 대여 리스트" << std::endl;
    for (Bicycle* bicycle : bicycles) {
        auto details = bicycle->getBicycleDetails();
        out_fp << "> " << details["bicycleId"] << " " << details["name"] << std::endl;
    }
    out_fp << std::endl;
}