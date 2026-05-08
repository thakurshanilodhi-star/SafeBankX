#include <iostream>
#include <thread>
#include <chrono>
#include "include/security.h"

using namespace std;
using namespace SafeBankX;

void header() {
    cout << "\033[1;34m";
    cout << "\n============================================================\n";
    cout << "                SAFE BANK X LOGIN SYSTEM                    \n";
    cout << "============================================================\n";

    cout << "\033[1;37m";
    cout << " Developed under the valuable guidance of Mr. Manish Jain\n";

    cout << "\033[1;33m";
    cout << "------------------------------------------------------------\n";
    cout << " Developed By : SHANI RAJPUT\n";
    cout << "------------------------------------------------------------\n";

    cout << "\033[0m\n";
}

int main() {
    AuthManager auth;
    string username, password;

    header();

    // Input section
    cout << "\033[1;36mEnter Username : \033[0m";
    cin >> username;

    cout << "\033[1;36mEnter Password : \033[0m";
    cin >> password;

    // Processing
    cout << "\n\033[1;34m---------------------------------------------\n";
    cout << " Verifying credentials...\n";
    cout << "---------------------------------------------\033[0m\n";

    this_thread::sleep_for(chrono::seconds(1));

    // Result
    if (auth.login(username, password)) {
        cout << "\033[1;32m";
        cout << " Status  : SUCCESS\n";
        cout << " User    : " << username << "\n";
        cout << " Message : Login Successful\n";
    } else {
        cout << "\033[1;31m";
        cout << " Status  : FAILED\n";
        cout << " Message : Invalid Credentials\n";
    }

    cout << "\033[0m";

    // Logout
    cout << "\n\033[1;33m---------------------------------------------\n";
    cout << " Logging out...\n";
    cout << "---------------------------------------------\033[0m\n";

    this_thread::sleep_for(chrono::seconds(1));
    auth.logout();

    // Footer
    cout << "\033[1;34m";
    cout << "\n Thank you for using SafeBankX!\n";
    cout << "============================================================\n";
    cout << "\033[0m";

    return 0;
}