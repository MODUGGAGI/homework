#include <iostream>
#include "RegisterBicycle.h"
#include "RegisterBicycleUI.h"

/*
	함수 이름 : RegisterBicycleUI::startInterface()
	기능	  : 자전거 등록 UI 인터페이스를 시작하고 사용자 입력을 받아 처리
	전달 인자 : control -> RegisterBicycle 컨트롤 객체, bicycleList -> 자전거 목록, bicycleCount -> 자전거 수
	반환값    : 없음
*/
void RegisterBicycleUI::startInterface(RegisterBicycle* control, Bicycle* bicycleList[], int& bicycleCount) {
    std::string bicycleId, name; //입력 파일에서 읽어온 정보를 저장할 bicycleId 변수, name 변수

    // 입력 파일에서 자전거 정보 읽기
    in_fp >> bicycleId >> name;

    // 자전거 등록 수행
    registerNewBicycle(control, bicycleId, name, bicycleList, bicycleCount);
}

/*
	함수 이름 : RegisterBicycleUI::registerNewBicycle()
	기능	  : 새로운 자전거 등록을 위한 UI 처리 함수
	전달 인자 : control -> RegisterBicycle 컨트롤 객체, bicycleId -> 자전거 ID, name -> 자전거 이름, bicycleList -> 자전거 목록, bicycleCount -> 자전거 수
	반환값    : 없음
*/
void RegisterBicycleUI::registerNewBicycle(RegisterBicycle* control, const std::string& bicycleId, const std::string& name,
                                           Bicycle* bicycleList[], int& bicycleCount) {
    // Control 클래스의 registerNewBicycle() 호출
    auto map = control->registerNewBicycle(bicycleId, name, bicycleList,bicycleCount);

    // 결과 출력
    out_fp << "3.1. 자전거 등록" << std::endl;
    out_fp << "> " << map["bicycleId"] << " " << map["name"] << std::endl << std::endl;
}