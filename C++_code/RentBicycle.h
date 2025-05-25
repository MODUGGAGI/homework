#ifndef RENT_BICYCLE_H
#define RENT_BICYCLE_H

#include <map>
#include <string>
#include "Bicycle.h"
#include "Member.h"

class RentBicycle {
public:
    // RentBicycle 클래스의 생성자로 UI를 통해 자전거 대여 프로세스를 시작
    RentBicycle(Bicycle* bicycleList[], int bicycleCount, User* currentUser);

    // 자전거 ID를 통해 자전거를 찾아 회원에게 대여 처리
    std::map<std::string, std::string> rentBicycle(const std::string& bicycleId, Bicycle* bicycleList[], int bicycleCount, Member* currentUser);
};

#endif