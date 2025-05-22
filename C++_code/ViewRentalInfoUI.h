#ifndef VIEW_RENTAL_INFO_UI_H
#define VIEW_RENTAL_INFO_UI_H

#include <fstream>
#include "Member.h"

// 전방 선언
class ViewRentalInfo;

extern std::ifstream in_fp; // main의 입력값을 받아오기 위한 외부 전역 변수
extern std::ofstream out_fp; // main의 입력값을 받아오기 위한 외부 전역 변수

class ViewRentalInfoUI {
public:
    void startInterface(Member *currentUser, std::map<std::string, std::map<std::string, std::string>> rentalMap); // 대여 정보 조회 UI 인터페이스, 대여 정보 조회를 처리하고 수행 결과 출력
};

#endif