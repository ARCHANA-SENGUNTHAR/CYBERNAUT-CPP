//ASG-12
/*
2) Implement a C++ program that simulates a simple banking system. Create a class for a
bank account with data members like account number, account holder name, and balance.
Include member functions to deposit and withdraw money from the account. Test the program
by creating multiple accounts and performing transactions.
*/
#include <iostream>
#include <vector>
#include <string>

class BankAccount {
private:
    int accountNumber;
    std::string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(int accNum, const std::string& accName, double initialBalance) 
        : accountNumber(accNum), accountHolderName(accName), balance(initialBalance) {}

    // Member functions
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposit of $" << amount << " successful. New balance: $"
        << balance << std::endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful. New balance: $"
            << balance << std::endl;
        } else {
            std::cout << "Insufficient funds. Withdrawal failed." << std::endl;
        }
    }

    // Getter functions
    int getAccountNumber() const {
        return accountNumber;
    }

    std::string getAccountHolderName() const {
        return accountHolderName;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    // Creating multiple bank accounts
    std::vector<BankAccount> accounts;
    accounts.push_back(BankAccount(1001, "Alice", 1000.0));
    accounts.push_back(BankAccount(1002, "Bob", 2000.0));

    // Performing transactions
    for (auto& acc : accounts) {
        std::cout << "Account Number: " << acc.getAccountNumber() << std::endl;
        std::cout << "Account Holder Name: " << acc.getAccountHolderName() << std::endl;
        std::cout << "Initial Balance: $" << acc.getBalance() << std::endl;

        // Deposit
        acc.deposit(500.0);

        // Withdraw
        acc.withdraw(300.0);
        acc.withdraw(1500.0);

        std::cout << std::endl;
    }

    return 0;
}


