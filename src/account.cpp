#include "../include/account.h"

using namespace SafeBankX;

Account::Account() {
    record.accountId = 0;
    record.frozen = false;
}

Account::Account(int id) : Account() {
    record.accountId = id;
}

int Account::getId() const {
    return record.accountId;
}

bool Account::canOperate() const {
    return !record.frozen;
}

void Account::freeze() {
    record.frozen = true;
}

const AccountRecord& Account::raw() const {
    return record;
}