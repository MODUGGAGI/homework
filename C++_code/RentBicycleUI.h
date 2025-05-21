#ifndef RENT_BICYCLE_UI_H
#define RENT_BICYCLE_UI_H

#include <string>
#include "User.h"
#include "Member.h"
#include "Bicycle.h"

// ✅ 전방 선언 추가
class RentBicycle;

extern std::ifstream in_fp;
extern std::ofstream out_fp;

class RentBicycleUI {
public:
    // ✅ 매개변수 변경
    void startInterface(RentBicycle* control, Bicycle* bicycleList[], int bicycleCount, User* currentUser);
    // ✅ 매개변수 변경
    void rentBicycle(RentBicycle* control, const std::string& bicycleId, Bicycle* bicycleList[], int bicycleCount, Member* member);
};

#endif