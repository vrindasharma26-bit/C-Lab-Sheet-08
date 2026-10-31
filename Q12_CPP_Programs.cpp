#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(float amount) {
        if (amount > 0)
            balance += amount;
    }

    void withdraw(float amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance\n";
    }

    void display() {
        cout << "Balance: " << balance;
    }
};

int main() {
    BankAccount b;
    float amount;

    cout << "Enter deposit amount: ";
    cin >> amount;
    b.deposit(amount);

    cout << "Enter withdrawal amount: ";
    cin >> amount;
    b.withdraw(amount);

    b.display();

    return 0;
}
