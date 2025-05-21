#ifndef RENT_BICYCLE_H
#define RENT_BICYCLE_H

#include "Bicycle.h"
#include "Member.h"
#include <string>

class RentBicycle {
public:
    // ✅ 생성자 추가
    RentBicycle(Bicycle* bicycleList[], int bicycleCount, User* currentUser);

    // 기존 메서드 유지
    Bicycle* rentBicycle(const std::string& bicycleId, Bicycle* bicycleList[], int bicycleCount, Member* member);
};

#endif