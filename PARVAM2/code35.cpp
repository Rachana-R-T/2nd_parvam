#include <iostream>
#include <string>
#include <iomanip> 

class BankAccount 
{
protected:
    std::string accountNumber;
    double balance;
    double interestRate;

public:
    
    BankAccount(const std::string& accNum, double initialBalance, double rate)
        : accountNumber(accNum), balance(initialBalance), interestRate(rate) {}

    void deposit(double amount) 
    {
        if (amount > 0) 
        {
            balance += amount;
            std::cout << "Deposited $" << std::fixed << std::setprecision(2) << amount << ". New balance: $" << balance << std::endl;
        } 
        else 
        {
            std::cout << "Deposit amount must be positive." << std::endl;
        }
    }

    virtual void withdraw(double amount) 
    {
        if (amount > 0) 
        {
            if (balance >= amount) 
            {
                balance -= amount;
                std::cout << "Withdrew $" << std::fixed << std::setprecision(2) << amount << ". New balance: $" << balance << std::endl;
            } 
            else 
            {
                std::cout << "Insufficient funds." << std::endl;
            }
        } 
        else 
        {
            std::cout << "Withdrawal amount must be positive." << std::endl;
        }
    }

    virtual void applyInterest() = 0; 


    virtual void displayAccountInfo() const = 0; 
};

class SavingsAccount : public BankAccount 
{
public:
    
    SavingsAccount(const std::string& accNum, double initialBalance)
        : BankAccount(accNum, initialBalance, 0.02) {} 

    
    void applyInterest() override 
    {
        double interest = balance * interestRate;
        balance += interest;
        std::cout << "Interest of $" << std::fixed << std::setprecision(2) << interest << " applied to Savings Account. New balance: $" << balance << std::endl;
    }

    void displayAccountInfo() const override 
    {
        std::cout << "\n--- Savings Account Details ---" << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << std::fixed << std::setprecision(2) << balance << std::endl;
        std::cout << "Interest Rate: " << interestRate * 100 << "%" << std::endl;
    }

    double& getBalanceDirect() 
    {
        return balance;
    }
};

class PremiumAccount : public BankAccount 
{
private:
    

public:
    
    PremiumAccount(const std::string& accNum, double initialBalance, double baseInterestRate)
        : BankAccount(accNum, initialBalance, baseInterestRate * 1.10) {} 

    void applyInterest() override 
    {
        double interest = balance * interestRate;
        balance += interest;
        std::cout << "Interest of $" << std::fixed << std::setprecision(2) << interest << " applied to Premium Account. New balance: $" << balance << std::endl;
    }

    
    void displayAccountInfo() const override 
    {
        std::cout << "\n--- Premium Account Details ---" << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << std::fixed << std::setprecision(2) << balance << std::endl;
        std::cout << "Interest Rate: " << interestRate * 100 << "%" << std::endl;
    }
};

int main() 
{
    SavingsAccount mySavings("SA12345", 1000.00);
    mySavings.displayAccountInfo();
    mySavings.deposit(200.50);
    mySavings.withdraw(50.25);
    mySavings.applyInterest();
    mySavings.displayAccountInfo();

    std::cout << "\nDirectly accessing Savings balance: $" << mySavings.getBalanceDirect() << std::endl;
    mySavings.getBalanceDirect() += 10.00; 
    std::cout << "Savings balance after direct modification: $" << mySavings.getBalanceDirect() << std::endl;

    PremiumAccount myPremium("PA67890", 5000.00, 0.02);
    myPremium.displayAccountInfo();

    myPremium.deposit(1000.00);
    myPremium.withdraw(300.75);
    myPremium.applyInterest();
    myPremium.displayAccountInfo();

    return 0;
}