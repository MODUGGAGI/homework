#include "ViewRentalInfoUI.h"
#include "ViewRentalInfo.h"
#include "Member.h"
#include <iostream>
#include <fstream>

void ViewRentalInfoUI::startInterface(User* currentUser) {
    // 일반 회원(Member)만 대여 정보 조회 가능
    Member* member = dynamic_cast<Member*>(currentUser);

    // 자전거 목록을 저장할 변수
    std::vector<Bicycle*> bicycles;

    // ViewRentalInfo 컨트롤 객체 생성 - 생성자에서 자전거 목록을 참조로 받아옴
    ViewRentalInfo control(member, bicycles);

    // 이제 bicycles 변수에 값이 채워져 있음

    // 결과 출력
    out_fp << "5.1. 자전거 대여 리스트" << std::endl;
    for (Bicycle* bicycle : bicycles) {
        auto details = bicycle->getBicycleDetails();
        out_fp << "> " << details["bicycleId"] << " " << details["name"] << std::endl;
    }
    out_fp << std::endl;
}