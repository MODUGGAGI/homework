#ifndef VIEW_RENTAL_INFO_UI_H
#define VIEW_RENTAL_INFO_UI_H

#include "User.h"

// ✅ 전방 선언 추가
class ViewRentalInfo;

extern std::ifstream in_fp;
extern std::ofstream out_fp;

class ViewRentalInfoUI {
public:
    // ✅ 매개변수 변경
    void startInterface(ViewRentalInfo* control, User* currentUser);
};

#endif