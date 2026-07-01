#include <bits/stdc++.h>
using namespace std;

class BankAccount {

private:
    double balance = 0.0;
public:
    BankAccount(double initialBalance) {
        if(initialBalance > balance) {
            balance = initialBalance;
        } else {
            cout << "Initial balance must be greater than 0" << endl;
        }
    }
    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
        } else {
            cout << "Deposit amount must be greater than 0" << endl;
        }
    }
    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Withdraw amount must be greater than 0 and less than or equal to balance" << endl;
        }
    }
    double getBalance() {
        return balance;
    }
};
int main () {
    BankAccount account(-1200.0);
    account.deposit(12000.0);
    account.withdraw(1000.0);
     cout << "Current Balance : " << account.getBalance() << "\n";
    return 0;

}