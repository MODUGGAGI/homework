#ifndef REGISTER_BICYCLE_H
#define REGISTER_BICYCLE_H

#include <map>
#include <string>
#include "Bicycle.h"

class RegisterBicycle {
public:
    // RegisterBicycle 클래스의 생성자로 UI를 통해 자전거 등록 프로세스를 시작
    RegisterBicycle(Bicycle* bicycleList[], int& bicycleCount);

    // 새로운 자전거를 생성하고 자전거 목록에 추가
    std::map<std::string, std::string> registerNewBicycle(const std::string& bicycleId, const std::string& name,
                            Bicycle* bicycleList[], int& bicycleCount);
};

#endif