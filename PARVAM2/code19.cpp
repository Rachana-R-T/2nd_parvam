#include <iostream>
using namespace std;
class ATM
{
private:
int pin=1234;
double balance=5000;
bool verifypin(int enteredpin)
{
    return enteredpin==pin;
}    
public:
void withdrawcash(int enteredpin,double amount)
{
    if(verifypin(enteredpin))
    {
        if(amount<=balance)
        {
            balance-=amount;
            cout<<"withdrawl successful.remaining balance:"<<endl;
        }
        else
        {
            cout<<"insufficient balance."<<endl;
        }
    }
    else
    {
         cout<<"invalid pin!"<<endl;
    }
}
void checkbalance(int enteredpin)
{
    if(verifypin(enteredpin))
    {
        cout<<"your balance is:"<<balance<<endl;
    }
    else
    {
        cout<<"invalid pin!"<<endl;
    }
}

};
int main()
{
    ATM myATM;
    myATM.withdrawcash(1234,1000);
    myATM.checkbalance(1234);
    myATM.withdrawcash(1111,500);
    return 0;
}