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
    // UI 객체 생성
    ViewRentalInfoUI ui;
    // startInterface 호출
    ui.startInterface(this, currentMember);
}

/*
	함수 이름 : ViewRentalInfo::viewRentalInfo()
	기능	  : 회원의 대여 자전거 목록을 조회하여 반환
	전달 인자 : member -> 조회할 회원, bicycles -> 자전거 목록을 저장할 벡터
	반환값    : std::map<std::string, std::map<std::string, std::string>> -> 대여한 자전거의 목록을 담고 있는 중첩 Map
*/
std::map<std::string, std::map<std::string, std::string>> ViewRentalInfo::viewRentalInfo(Member* member, std::vector<Bicycle*>& bicycles) {
    // 회원의 자전거 목록을 참조 매개변수에 할당
    bicycles = member->listBicycles();

    //대여한 모든 자전거의 정보 담을 중첩 맵
    std::map<std::string, std::map<std::string, std::string>> rentalMap;

    for (Bicycle* bicycle : bicycles) {
        // 자전거의 상세 정보 가져오기
        auto bicycleDetails = bicycle->getBicycleDetails();

        // 자전거 ID를 외부 키로 사용하여 중첩 맵에 저장
        std::string bicycleId = bicycleDetails["bicycleId"];
        rentalMap[bicycleId] = bicycleDetails;
    }

    return rentalMap;
}