#include "../include/security.h"

namespace SafeBankX {

AuthManager::AuthManager() {
    username = "Shani";
    password = "96060397";
    loggedIn = false;
}

bool AuthManager::login(const std::string& user, const std::string& pass) {
    if (user == username && pass == password) {
        loggedIn = true;
        return true;
    }
    return false;
}

void AuthManager::logout() {
    loggedIn = false;
}

bool AuthManager::isLoggedIn() const {
    return loggedIn;
}

}