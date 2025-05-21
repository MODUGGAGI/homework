#ifndef VIEW_RENTAL_INFO_H
#define VIEW_RENTAL_INFO_H

#include "Member.h"
#include <vector>
#include "Bicycle.h"

class ViewRentalInfo {
public:
    std::vector<Bicycle*> viewRentalInfo(Member* member);
};

#endif