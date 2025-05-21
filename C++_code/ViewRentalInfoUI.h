#ifndef VIEW_RENTAL_INFO_UI_H
#define VIEW_RENTAL_INFO_UI_H

#include "User.h"

extern std::ifstream in_fp;
extern std::ofstream out_fp;

class ViewRentalInfoUI {
public:
    void startInterface(User* currentUser);
};

#endif