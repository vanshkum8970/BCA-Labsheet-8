// Program 12: Encapsulation Using Bank Account
#include <iostream>
using namespace std;

class BankAccount {
    double balance; // Private data member
public:
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    }
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
    void showBalance() {
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount(1000.0);
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.showBalance();
    return 0;
}
