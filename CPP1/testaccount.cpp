#include <iostream>
#include <string>
using namespace std;

// Base class: Account
class Account {
protected:
    string customerName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Member function to initialize data members
    void initializeAccount(const string& name, int number, const string& type, double initialBalance) {
        customerName = name;
        accountNumber = number;
        accountType = type;
        balance = initialBalance;
    }

    // Accept deposit
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << " New Balance: " << balance << endl;
    }

    // Display balance
    void displayBalance() const {
        cout << "Customer: " << customerName << ", Balance: " << balance << endl;
    }

    // Virtual function to compute and deposit interest
    virtual void computeInterest() {
        // Empty implementation, overridden in derived classes
    }

    // Withdraw
    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Virtual function to check minimum balance and impose penalty
    virtual void checkMinimumBalance() {
        // Empty implementation, overridden in derived classes
    }
};

// Derived class: Current Account
class CurrAcct : public Account {
private:
    const double minimumBalance = 500.0;
    const double penalty = 50.0;

public:
    // Check for minimum balance and impose penalty
    void checkMinimumBalance() override {
        if (balance < minimumBalance) {
            balance -= penalty;
            cout << "Minimum balance not maintained! Penalty imposed: " << penalty << ", New Balance: " << balance << endl;
        }
    }
};

// Derived class: Savings Account
class SavAcct : public Account {
private:
    const double interestRate = 0.04; // 4% interest rate

public:
    // Compute and deposit interest
    void computeInterest() override {
        double interest = balance * interestRate;
        balance += interest;
        cout << "Interest: " << interest << ", New Balance: " << balance << endl;
    }
};

int main() {
    // Current account example
    CurrAcct currentAccount;
    currentAccount.initializeAccount("Alice", 1001, "Current", 1000.0);
    currentAccount.deposit(500);
    currentAccount.displayBalance();
    currentAccount.withdraw(300);
    currentAccount.checkMinimumBalance();

    cout << endl;

    // Savings account example
    SavAcct savingsAccount;
    savingsAccount.initializeAccount("Bob", 2002, "Savings", 2000.0);
    savingsAccount.computeInterest();
    savingsAccount.displayBalance();
    savingsAccount.withdraw(1000);
    savingsAccount.displayBalance();

    return 0;
}
