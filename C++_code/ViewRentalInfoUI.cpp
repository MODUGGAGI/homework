#include "ViewRentalInfoUI.h"
#include "ViewRentalInfo.h"
#include "Member.h"
#include <iostream>
#include <fstream>

/*
	함수 이름 : ViewRentalInfoUI::startInterface()
	기능	  : 대여 정보 조회 UI 인터페이스를 시작하고 처리
	전달 인자 : control -> ViewRentalInfo 컨트롤 객체, currentUser -> 현재 로그인된 사용자
	반환값    : 없음
*/
void ViewRentalInfoUI::startInterface(ViewRentalInfo* control, Member* currentUser) {
    // 자전거 목록을 저장할 변수
    std::vector<Bicycle*> bicycles;

    // Control 클래스의 viewRentalInfo() 호출
    auto rentalMap = control->viewRentalInfo(currentUser,bicycles);

    // 결과 출력
    out_fp << "5.1. 자전거 대여 리스트" << std::endl;
    for (const auto& rental : rentalMap) {
        const auto& bicycleDetails = rental.second;

        out_fp << "> " << bicycleDetails.at("bicycleId") << " " << bicycleDetails.at("name") << std::endl;
    }
    out_fp << std::endl;
}