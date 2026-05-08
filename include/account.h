#ifndef ACCOUNT_H
#define ACCOUNT_H

namespace SafeBankX {

struct AccountRecord {
    int accountId;
    bool frozen;
};

class Account {
    AccountRecord record;

public:
    Account();
    explicit Account(int id);

    int getId() const;
    bool canOperate() const;
    void freeze();

    const AccountRecord& raw() const;
};

}

#endif