#ifndef TRANSACTION_H
#define TRANSACTION_H

namespace SafeBankX {

class Transaction {
public:
    bool credit(int accountId, double amount);
    bool debit(int accountId, double amount);
};

}

#endif