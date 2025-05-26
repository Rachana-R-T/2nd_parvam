#include <iostream>
using namespace std;
class box
{
public:
    int length;
    box()
    {
        length=0;
    }    
    box(int l)
    {
        length=l;
    }
    void display()
    {
        cout<<"length:"<<length<<endl;
    }
};
int main()
{
    box b1;
    box b2(20);
    b1.display();
    b2.display();
    return 0;
}