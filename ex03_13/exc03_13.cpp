//ex03_13
#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account account1(696969);
    Account account2(-100);
    
    cout << "The initial balance for account1 is: $"
        << account1.getBalance() << endl;
    cout << "The initial balance for account2 is: $"
        << account2.getBalance() << endl;

    account1.credit(10101);
    cout << "The balance for account1 after crediting is: $"
        << account1.getBalance() << endl;
    account1.debit(1);
    cout << "The balance for account1 after debiting is: $"
         << account1.getBalance() << endl;
    account1.debit(707070);
    cout << "The balance for account1 after debiting too much value is: $"
        << account1.getBalance() << endl;
}