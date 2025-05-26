#include<iostream>
using namespace std;

class Shape
{
    public:
    void setColor(string c)
    {
        cout<<"Setting color:"<<c<<endl;
    }
};

class Circle:public Shape
{
    public:
    void drawCircle()
        {
            cout<<"Drawing Circle."<<endl;
        }
    };

    class Rectangle:public Shape{
        public:
        void drawRectangle()
        {
            cout<<"Drawing Rectangle."<<endl;
        }
    };

    int main()
    {
        Circle c;
        Rectangle r;
        c.setColor("Red");
        c.drawCircle();

        r.setColor("Blue");
        r.drawRectangle();

        return 0;
    }

