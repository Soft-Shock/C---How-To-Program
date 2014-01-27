#include "Account.h"
#include <iostream>

using namespace std;

Account::Account(int initBalance)
{
    if (initBalance >= 0)
        balance = initBalance;
    if (initBalance < 0)
    {
        balance = 0;
        cout << "The initial balance for the account is invalid. "
            "the account balance is set to: $" << balance << endl;
    }
}

void Account::credit(int amount)
{
    balance += amount;
}

void Account::debit(int amount)
{
    if (amount <= balance)
        balance -= amount;
    else
        cout << "Debit amount exceeds account balance. "
            "No balance withdrawn." << endl;
}

int Account::getBalance()
{
    return balance;
}
