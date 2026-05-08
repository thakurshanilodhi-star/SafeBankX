#include "../include/repository.h"

namespace SafeBankX {

void Repository::saveAccount(const Account& account) {
    // initialize balance if account is new
    if (balances.find(account.getId()) == balances.end()) {
        balances[account.getId()] = 0.0;
    }
}

void Repository::applyTransaction(int accountId, double amount) {
    balances[accountId] += amount;
}

double Repository::getBalance(int accountId) const {
    auto it = balances.find(accountId);
    if (it == balances.end()) {
        return 0.0;
    }
    return it->second;
}

} // namespace SafeBankX