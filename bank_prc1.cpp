#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int accNo;
    string accType;
    float balance;

public:
    void assignValues(string n, int a, string t, float b) {
        name = n;
        accNo = a;
        accType = t;
        balance = b;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Amount deposited successfully!\n";
    }

    void withdraw(float amount) {
        if (amount > balance)
            cout << "Insufficient balance!\n";
        else {
            balance -= amount;
            cout << "Amount withdrawn successfully!\n";
        }
    }

    void display() {
        cout << "Name: " << name << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount b;
    b.assignValues("Shubham", 12345, "Savings", 5000);
    b.deposit(1000);
    b.withdraw(2000);
    b.display();
    return 0;
}
