#ifndef BICYCLE_COLLECTION_H
#define BICYCLE_COLLECTION_H

#include <vector>
#include "Bicycle.h"

class BicycleCollection {
private:
    std::vector<Bicycle> bicycles; // 해당 회원이 대여한 자전거 저장하는 벡터

public:
    void addBicycle(const Bicycle& bicycle); // 자전거 컬렉션에 새로운 자전거를 추가 -> bicycle: 추가할 자전거 객체
    std::vector<Bicycle*> getAllBicyclePointers() const; // 컬렉션 내 모든 자전거의 포인터를 벡터로 반환
};

#endif