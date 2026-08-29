#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    string accountNumber;
    string accountHolder;
    double balance;

    BankAccount(string accNo, string holder, double bal) {
        accountNumber = accNo;
        accountHolder = holder;
        balance = bal;
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount) {
        balance = balance + amount;
        cout << amount << " deposited successfully." << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << amount << " withdrawn successfully." << endl;
        }
        else {
            cout << "Insufficient Balance!" << endl;
        }
    }
};

int main() {
    BankAccount b1("123456789", "Priyanshi", 10000);

    cout << "Initial Account Details:" << endl;
    b1.display();

    cout << endl;

    b1.deposit(5000);

    b1.withdraw(3000);

    cout << endl;
    cout << "Final Account Details:" << endl;

    b1.display();

    return 0;
}