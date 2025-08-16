#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    
    BankAccount(string accNum, string accHolder, double bal) {
        accountNumber = accNum;
        accountHolderName = accHolder;
        balance = bal;
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }
    
    void displayBalance()  {
        cout << "Current Balance: " << balance << endl;
    }
    
    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount; 
            cout << "Withdrew: " << amount << endl;
            
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
            
        }
    }

    
    void displayAccountInfo()  {
        cout << "Account Number: " << accountNumber 
             << ", Account Holder: " << accountHolderName 
             << ", Balance: " << balance << endl;
    }
};

int main(){
    BankAccount account("123456789", "Alice", 500.0);
    account.displayAccountInfo();
    account.deposit(200.0);
    account.displayBalance();
    account.withdraw(100.0);
    account.displayAccountInfo();
}


    

