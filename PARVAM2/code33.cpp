#include<iostream>
using namespace std;
class BankAccount
{
    protected:
    double balance;

    public:
    void setBalance(double b)
    {
        balance = b;
    }
};
class SavingsAccount:public BankAccount
{
    public:
    void showBalance()
        {
            cout<<"Balance is: $"<<balance<<endl;
        }
};
int main()
{
    SavingsAccount acc;
    acc.setBalance(1000.50);
    acc.showBalance();
    return 0;
}