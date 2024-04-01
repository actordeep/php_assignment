#include <iostream>

class BankAccount
{
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    void deposit(double amount)
    {
        balance += amount;
        std::cout << "Amount " << amount << " deposited successfully." << std::endl;
    }

    void withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            std::cout << "Amount " << amount << " withdrawn successfully." << std::endl;
        }
        else
        {
            std::cerr << "Error: Insufficient balance. Withdrawal failed." << std::endl;
        }
    }

    void display()
    {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main()
{

    BankAccount account(123456, 1000.0);

    std::cout << "Initial Account Details:" << std::endl;
    account.display();

    account.deposit(500.0);

    account.withdraw(200.0);

    std::cout << "\nUpdated Account Details:" << std::endl;
    account.display();

    return 0;
}
