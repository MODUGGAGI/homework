#include "ViewRentalInfo.h"
#include "ViewRentalInfoUI.h"

/*
	함수 이름 : ViewRentalInfo::ViewRentalInfo()
	기능	  : ViewRentalInfo 클래스의 생성자로 UI를 통해 대여 정보 조회 프로세스를 시작
	전달 인자 : currentUser -> 현재 로그인된 사용자
	반환값    : 없음
*/
ViewRentalInfo::ViewRentalInfo(User* currentUser) {
    //현재 로그인한 유저 Member로 다운 캐스팅
    Member* currentMember = dynamic_cast<Member*>(currentUser);

    auto bicycles = currentMember->listBicycles();

    std::map<std::string, std::map<std::string, std::string>> rentalMap;

    for (Bicycle* bicycle : bicycles) {
        // 자전거의 상세 정보 가져오기
        auto bicycleDetails = bicycle->getBicycleDetails();

        // 자전거 ID를 외부 키로 사용하여 중첩 맵에 저장
        std::string bicycleId = bicycleDetails["bicycleId"];
        rentalMap[bicycleId] = bicycleDetails;
    }

    // UI 객체 생성
    ViewRentalInfoUI ui;

    // startInterface 호출
    ui.startInterface(currentMember, rentalMap);
}