﻿#include <iostream>
#include "Member.h"
#include "ViewRentalInfo.h"
#include "ViewRentalInfoUI.h"

/*
	함수 이름 : ViewRentalInfoUI::startInterface()
	기능	  : 대여 정보 조회 UI 인터페이스를 시작하고 처리
	전달 인자 : control -> ViewRentalInfo 컨트롤 객체, currentUser -> 현재 로그인된 사용자
	반환값    : 없음
*/
void ViewRentalInfoUI::startInterface(Member* currentUser, std::map<std::string, std::map<std::string, std::string>> rentalMap) {

    // 결과 출력
    out_fp << "5.1. 자전거 대여 리스트" << std::endl;
    for (const auto& rental : rentalMap) {
        const auto& bicycleDetails = rental.second;

        out_fp << "> " << bicycleDetails.at("bicycleId") << " " << bicycleDetails.at("name") << std::endl;
    }
    out_fp << std::endl;
}