#include <iostream>
#include <string>

class BankAccount {
private:
    std::string depositorName;
    int accountNumber;
    std::string accountType;
    double balance;

public:
   
    BankAccount(const std::string& name, int accNumber, const std::string& type, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = type;
        balance = initialBalance;
    }

    
    void deposit(double amount) {
        balance += amount;
        std::cout << "Amount " << amount << " deposited successfully.\n";
    }

    
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Amount " << amount << " withdrawn successfully.\n";
        } else {
            std::cout << "Insufficient balance. Withdrawal failed.\n";
        }
    }

   
    void display() {
        std::cout << "Depositor Name: " << depositorName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main() {
    
    BankAccount myAccount("John Doe", 123456789, "Savings", 1000.0);

    
    myAccount.display();

   
    myAccount.deposit(500.0);

   
    myAccount.withdraw(200.0);

    
    myAccount.display();

    return 0;
}
