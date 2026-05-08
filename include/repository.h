#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <unordered_map>
#include "account.h"

namespace SafeBankX {

class Repository {
private:
    std::unordered_map<int, double> balances;

public:
    Repository() = default;

    void saveAccount(const Account& account);

    // Transaction helpers
    void applyTransaction(int accountId, double amount);
    double getBalance(int accountId) const;
};

} // namespace SafeBankX

#endif