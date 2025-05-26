#include <iostream>
using namespace std;
class student
{
public:
   string name;
   int age;
   student(string n, int a)
   {
       name = n;
       age = a;
   }     
   student(const student &s)
   {
    name=s.name;

    age=s.age;
   }
   void display()
   {
       cout<<"name:"<<name<<",age"<<age<<endl;
   }   
};
 int main()
{
       student s1("John",25);
       student s2=s1;
       s2.display();
       return 0;
}