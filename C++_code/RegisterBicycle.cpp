#include "RegisterBicycle.h"
#include "RegisterBicycleUI.h"

/*
	함수 이름 : RegisterBicycle::RegisterBicycle()
	기능	  : RegisterBicycle 클래스의 생성자로 UI를 통해 자전거 등록 프로세스를 시작
	전달 인자 : bicycleList -> 자전거 목록, bicycleCount -> 자전거 수
	반환값    : 없음
*/
RegisterBicycle::RegisterBicycle(Bicycle* bicycleList[], int& bicycleCount) {
    // UI 객체 생성
    RegisterBicycleUI ui;

    // startInterface 호출
    ui.startInterface(this, bicycleList, bicycleCount);
}

/*
	함수 이름 : RegisterBicycle::registerNewBicycle()
	기능	  : 새로운 자전거를 생성하고 자전거 목록에 추가
	전달 인자 : bicycleId -> 자전거 ID, name -> 자전거 이름, bicycleList -> 자전거 목록, bicycleCount -> 자전거 수
	반환값    : std::map<std::string, std::string> -> 등록한 자전거의 Details를 담고 있는 Map
*/
std::map<std::string, std::string> RegisterBicycle::registerNewBicycle(const std::string& bicycleId, const std::string& name,
                                         Bicycle* bicycleList[], int& bicycleCount) {
    // 새 자전거 객체 생성
    Bicycle* newBicycle = new Bicycle(bicycleId, name);

    // 자전거 객체 저장
    bicycleList[bicycleCount++] = newBicycle;

    // 자전거 객체의 getBicycleDetails() 호출해서 반환
    return newBicycle->getBicycleDetails();
}