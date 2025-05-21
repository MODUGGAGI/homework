#ifndef REGISTER_BICYCLE_H
#define REGISTER_BICYCLE_H

#include "Bicycle.h"
#include "User.h"
#include <string>

class RegisterBicycle {
public:
    // ✅ 생성자 추가
    RegisterBicycle(Bicycle* bicycleList[], int& bicycleCount, User* currentUser);

    // 기존 메서드 유지
    void registerNewBicycle(const std::string& bicycleId, const std::string& name,
                            Bicycle* bicycleList[], int& bicycleCount);
};

#endif