#include <iostream>
using namespace std;
class demo
{
public:
    demo()
    {
        cout<<"constructor called!"<<endl;
    }     
    ~demo()
    {
        cout<<"destructor called!"<<endl;
    }
};
int main()
{
    demo d1;
    return 0;
}