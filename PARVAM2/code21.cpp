#include <iostream>
using namespace std;
class car
{
    public:
    string brand;
    int speed;
    car()
    {
        brand="john";
        speed=0;
        cout<<"default constructor called."<<endl;
    }
    car(string b, int s)
    {
        brand=b;
        speed=s;
        cout<<"parameterized constructor called."<<endl;
    }
car(const car &c)
    {
        brand=c.brand;
        speed=c.speed;
        cout<<"copy constructor called."<<endl;
    }   
    
    void drive()
    {
        cout<<"driving"<<"at"<<speed<<"km/h."<<endl;
    }
};

int main()
{
    car car1;
    car1.drive();

    car car2("honda",100);
    car2.drive();

    car car3=car2;
    car3.drive();

    return 0;
}