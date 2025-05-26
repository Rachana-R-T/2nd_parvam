#include<iostream>
using namespace std;

class User
{
    public:
    string name,email;
    void login()
    {
        cout<<name<<"logged in with email"<<email<<endl;
    }
};

class Customer : public User
{
    public:
    void brovseProducts()
    {
        cout<<name<<"is browsing products."<<endl;
    }
};

int main()
{
    Customer c;
    c.name="Alice";
    c.email="alice@example.com";
    c.login();
    c.brovseProducts();
    return 0;
}