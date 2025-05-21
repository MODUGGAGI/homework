#ifndef VIEW_RENTAL_INFO_H
#define VIEW_RENTAL_INFO_H

#include "Member.h"
#include <vector>
#include "Bicycle.h"
#include "User.h"

class ViewRentalInfo {
public:
    // ✅ 생성자 수정
    ViewRentalInfo(User* currentUser);

    // ✅ 메서드 추가
    void viewRentalInfo(Member* member, std::vector<Bicycle*>& bicycles);
};

#endif