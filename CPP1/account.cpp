#include <iostream>
#include <string>
using namespace std;

class Account {
	
protected:
    string acc_name;
    int acc_number;
    float balance;

public:
    Account(const string& name, int accN, float bal) {
        acc_name = name;
        acc_number = accN;
        balance = bal;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited! New Balance = " << balance << endl;
        } else {
            cout << "INVALID!!" << endl;
        }
    }

    void withdraw(float amount);

    void display() {
        cout << "Account holder name: " << acc_name << endl;
        cout << "Account Number: " << acc_number << endl;
        cout << "Account Balance: " << balance << endl;
    }
};

class SavingAccount : public Account {
public:
    SavingAccount(const string& name, int accNo, float bal) : Account(name, accNo, bal) {}

    void withdraw(float amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        } else if (balance - amount < 1000) {
            cout << "Insufficient balance. Minimum balance of 1000 required." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful. New Balance: " << balance << endl;
        }
    }
};

class CurrentAccount : public Account {
public:
    CurrentAccount(const string& name, int accNo, float bal) : Account(name, accNo, bal) {}

    void withdraw(float amount) {
        double maxOverdraft = balance * 0.05;
        if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        } else if (amount > balance + maxOverdraft) {
            cout << "Overdraft limit exceeded." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful. New Balance: " << balance << endl;
        }
    }
};

int main() {
    int choice;
    string name;
    int accNo;
    float balance, amount;

    cout << "Choose Account Type:\n1. Saving Account\n2. Current Account\nEnter choice: ";
    cin >> choice;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    if (choice == 1) {
        SavingAccount savingAcc(name, accNo, balance);
        int c;

        do {
            cout << "\nMenu:\n1. Deposit\n2. Withdraw\n3. Display\n4. Exit\nEnter choice: ";
            cin >> c;

            switch (c) {
                case 1:
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    savingAcc.deposit(amount);
                    break;

                case 2:
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    savingAcc.withdraw(amount);
                    break;

                case 3:
                    savingAcc.display();
                    break;

                case 4:
                    cout << "Exiting..." << endl;
                    break;

                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        } while (c != 4);

    } else if (choice == 2) {
        CurrentAccount currentAcc(name, accNo, balance);
        int ch;

        do {
            cout << "\nMenu:\n1. Deposit\n2. Withdraw\n3. Display\n4. Exit\nEnter choice: ";
            cin >> ch;

            switch (ch) {
                case 1:
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    currentAcc.deposit(amount);
                    break;

                case 2:
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    currentAcc.withdraw(amount);
                    break;

                case 3:
                    currentAcc.display();
                    break;

                case 4:
                    cout << "Exiting..." << endl;
                    break;

                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        } while (ch != 4);

    } else {
        cout << "Invalid account type selected. Exiting..." << endl;
    }

    return 0;
}


