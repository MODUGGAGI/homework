#ifndef VIEW_RENTAL_INFO_H
#define VIEW_RENTAL_INFO_H

#include <map>
#include <vector>
#include "Bicycle.h"
#include "Member.h"

class ViewRentalInfo {
public:
    // ViewRentalInfo 클래스의 생성자로 UI를 통해 대여 정보 조회 시작
    ViewRentalInfo(User* currentUser);

    // 회원의 대여 자전거 목록을 조회하여 반환
    std::map<std::string, std::map<std::string, std::string>> viewRentalInfo(Member* member, std::vector<Bicycle*>& bicycles);
};

#endif