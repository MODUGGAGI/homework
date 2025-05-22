#include "BicycleCollection.h"

/*
	함수 이름 : BicycleCollection::addBicycle()
	기능	  : 자전거 컬렉션에 새로운 자전거를 추가
	전달 인자 : bicycle -> 추가할 자전거 객체
	반환값    : 없음
*/
void BicycleCollection::addBicycle(const Bicycle& bicycle) {
    bicycles.push_back(bicycle);
}

/*
	함수 이름 : BicycleCollection::getAllBicyclePointers()
	기능	  : 컬렉션 내 모든 자전거의 포인터를 벡터로 반환
	전달 인자 : 없음
	반환값    : vector<Bicycle*> -> 자전거 포인터 목록
*/
std::vector<Bicycle*> BicycleCollection::getAllBicyclePointers() const {
    std::vector<Bicycle*> result;
    for (auto& bicycle : bicycles) {
        result.push_back(const_cast<Bicycle*>(&bicycle));
    }
    return result;
}