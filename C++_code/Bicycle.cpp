#include "Bicycle.h"

/*
	함수 이름 : Bicycle::Bicycle(const std::string& id, const std::string& name)
	기능	  : Bicycle 클래스의 매개변수 생성자로 자전거 ID와 이름을 초기화
	전달 인자 : id -> 자전거 ID, name -> 자전거 이름
	반환값    : 없음
*/
Bicycle::Bicycle(const std::string& id, const std::string& name)
        : bicycleId(id), name(name) {}

/*
	함수 이름 : Bicycle::getBicycleDetails()
	기능	  : 자전거의 상세 정보(ID, 이름)를 map 형태로 반환
	전달 인자 : 없음
	반환값    : map<string, string> -> 자전거 상세 정보
*/
std::map<std::string, std::string> Bicycle::getBicycleDetails() const {
    return {
            {"bicycleId", bicycleId},
            {"name", name}
    };
}