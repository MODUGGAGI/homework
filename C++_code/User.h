#ifndef C__CODE_USER_H
#define C__CODE_USER_H

#include <string>
#include <map>

class User {
protected:
    std::string userId;
    std::string password;
public:
    User();
    User(const std::string& id, const std::string& pw);

    std::string getUserId() const;
    std::string getPassword() const;
    virtual std::map<std::string, std::string> getUserDetails() const = 0;
};


#endif
