#ifndef SECURITY_H
#define SECURITY_H

#include <string>

namespace SafeBankX {

class AuthManager {
private:
    std::string username;
    std::string password;
    bool loggedIn;

public:
    AuthManager();

    bool login(const std::string& user, const std::string& pass);
    void logout();
    bool isLoggedIn() const;
};

}

#endif