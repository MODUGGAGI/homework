#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>
#include <map>

class Bicycle {
private:
    std::string bicycleId; // 자전거 ID
    std::string name; // 자전거 이름

public:
    Bicycle(const std::string& id, const std::string& name); // Bicycle 클래스의 생성자, 매개변수 -> id: 자전거 ID, name: 자전거 이름

    std::map<std::string, std::string> getBicycleDetails() const; // 자전거의 상세 정보를 반환
};

#endif
