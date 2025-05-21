#include "ViewRentalInfo.h"

// 생성자에서 Member의 자전거 목록을 참조 매개변수에 저장 - added
ViewRentalInfo::ViewRentalInfo(Member* member, std::vector<Bicycle*>& bicycles) {
    // 회원의 자전거 목록을 참조 매개변수에 할당
    bicycles = member->listBicycles();
}