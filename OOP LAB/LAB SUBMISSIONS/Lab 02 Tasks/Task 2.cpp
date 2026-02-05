#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    int accountNumber;
    string holderName;
    double balance;

public:
    void input() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, holderName);

        cout << "Enter Initial Balance: ";
        cin >> balance;

        if (balance < 0)
            balance = 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit Successful\n";
        } else {
            cout << "Invalid Deposit Amount\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Successful\n";
        } else {
            cout << "Invalid Withdrawal\n";
        }
    }

    void checkBalance() const {
        cout << "Current Balance: " << balance << endl;
    }

    void display() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << holderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    int choice;
    double amount;

    acc.input();

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Display Account Info\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Amount: ";
            cin >> amount;
            acc.deposit(amount);
        }
        else if (choice == 2) {
            cout << "Enter Amount: ";
            cin >> amount;
            acc.withdraw(amount);
        }
        else if (choice == 3) {
            acc.checkBalance();
        }
        else if (choice == 4) {
            acc.display();
        }

    } while (choice != 5);

    return 0;
}

