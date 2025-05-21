#include "ViewRentalInfo.h"

std::vector<Bicycle*> ViewRentalInfo::viewRentalInfo(Member* member) {
    // 회원의 자전거 목록 반환 - added
    return member->listBicycles();
}