#include "RentBicycle.h"
#include "RentBicycleUI.h"

/*
	함수 이름 : RentBicycle::RentBicycle()
	기능	  : RentBicycle 클래스의 생성자로 UI를 통해 자전거 대여 프로세스를 시작
	전달 인자 : bicycleList -> 자전거 목록, bicycleCount -> 자전거 수, currentUser -> 현재 로그인된 사용자
	반환값    : 없음
*/
RentBicycle::RentBicycle(Bicycle* bicycleList[], int bicycleCount, User* currentUser) {
    //현재 로그인한 유저 Member로 다운 캐스팅
    Member* currentMember = dynamic_cast<Member*>(currentUser);

    // UI 객체 생성
    RentBicycleUI ui;

    // startInterface 호출
    ui.startInterface(this, bicycleList, bicycleCount, currentMember);
}

/*
	함수 이름 : RentBicycle::rentBicycle()
	기능	  : 자전거 ID를 통해 자전거를 찾아 회원에게 대여 처리
	전달 인자 : bicycleId -> 자전거 ID, bicycleList -> 자전거 목록, bicycleCount -> 자전거 수, currentUser -> 대여할 회원
	반환값    : std::map<std::string, std::string> -> 대여된 자전거 객체의 Details 정보를 담은 Map
*/
std::map<std::string, std::string> RentBicycle::rentBicycle(const std::string& bicycleId, Bicycle* bicycleList[], int bicycleCount, Member* currentUser) {
    // 자전거 목록에서 ID를 이용하여 자전거 찾기
    for (int i = 0; i < bicycleCount; i++) {

        if (bicycleList[i]->getBicycleId() == bicycleId) { //ID값 비교
            // 자전거를 찾았으면 멤버의 rentBicycle 메서드 호출해서 대여
            currentUser->rentBicycle(*bicycleList[i]);

            // 대여한 자전거의 세부 정보를 담고 있는 map 반환
            return bicycleList[i]->getBicycleDetails();;
        }
    }

    // 예외 처리는 없다고 했지만, 함수 구조를 위해  모든 for문이 끝난 후 빈 map 반환처리
    return std::map<std::string, std::string>();
}