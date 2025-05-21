#include "ViewRentalInfo.h"
#include "ViewRentalInfoUI.h"

// ✅ 생성자 구현 수정
ViewRentalInfo::ViewRentalInfo(User* currentUser) {
    // UI 객체 생성
    ViewRentalInfoUI ui;
    // startInterface 호출
    ui.startInterface(this, currentUser);
}

// ✅ viewRentalInfo 메서드 구현
void ViewRentalInfo::viewRentalInfo(Member* member, std::vector<Bicycle*>& bicycles) {
    // 회원의 자전거 목록을 참조 매개변수에 할당
    bicycles = member->listBicycles();
}