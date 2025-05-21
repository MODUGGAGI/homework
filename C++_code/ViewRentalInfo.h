#ifndef VIEW_RENTAL_INFO_H
#define VIEW_RENTAL_INFO_H

#include "Member.h"
#include <vector>
#include "Bicycle.h"

class ViewRentalInfo {
public:
    // 생성자에서 참조 매개변수를 통해 자전거 목록 반환 - added
    ViewRentalInfo(Member* member, std::vector<Bicycle*>& bicycles);
};

#endif