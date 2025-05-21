#ifndef REGISTER_BICYCLE_UI_H
#define REGISTER_BICYCLE_UI_H

#include <string>
#include "User.h"
#include "Bicycle.h"

// ✅ 전방 선언 추가
class RegisterBicycle;

extern std::ifstream in_fp;
extern std::ofstream out_fp;

class RegisterBicycleUI {
public:
    // ✅ 매개변수 변경
    void startInterface(RegisterBicycle* control, Bicycle* bicycleList[], int& bicycleCount, User* currentUser);
    // ✅ 매개변수 변경
    void registerNewBicycle(RegisterBicycle* control, const std::string& bicycleId, const std::string& name,
                            Bicycle* bicycleList[], int& bicycleCount);
};

#endif