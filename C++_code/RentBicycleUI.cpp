#include <iostream>
#include "RentBicycle.h"
#include "RentBicycleUI.h"

/*
	함수 이름 : RentBicycleUI::startInterface()
	기능	  : 자전거 대여 UI 인터페이스를 시작하고 사용자 입력을 받아 처리
	전달 인자 : control -> RentBicycle 컨트롤 객체, bicycleList -> 자전거 목록, bicycleCount -> 자전거 수, currentUser -> 현재 로그인된 사용자
	반환값    : 없음
*/
void RentBicycleUI::startInterface(RentBicycle* control, Bicycle* bicycleList[], int bicycleCount, Member* currentUser) {
    // 파일 입력을 받아서 저장할 bicycleId 변수
    std::string bicycleId;

    // 입력 파일에서 자전거 ID 읽기
    in_fp >> bicycleId;

    // 자전거 대여 수행
    rentBicycle(control, bicycleId, bicycleList, bicycleCount, currentUser);
}

/*
	함수 이름 : RentBicycleUI::rentBicycle()
	기능	  : 자전거 대여를 위한 UI 처리 함수
	전달 인자 : control -> RentBicycle 컨트롤 객체, bicycleId -> 자전거 ID, bicycleList -> 자전거 목록, bicycleCount -> 자전거 수, currentUser -> 대여할 회원
	반환값    : 없음
*/
void RentBicycleUI::rentBicycle(RentBicycle* control, const std::string& bicycleId, Bicycle* bicycleList[], int bicycleCount, Member* currentUser) {
    // Control 클래스의 rentBicycle() 호출
    auto map = control->rentBicycle(bicycleId, bicycleList, bicycleCount, currentUser);

    // 결과 출력
    out_fp << "4.1. 자전거 대여" << std::endl;
    out_fp << "> " << map["bicycleId"] << " " << map["name"] << std::endl << std::endl;
}