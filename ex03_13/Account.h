#pragma once
class Account
{
public:
    Account(int initBalance);

    void credit(int amount);
    void debit(int amount);
    int getBalance();

private:
    int balance;
};