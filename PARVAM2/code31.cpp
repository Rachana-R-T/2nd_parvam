#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
    int usn;
    string college;
    student (string n,int a,int u,string c) 
    {
         name=n;
         age=a;
         usn=u;
         college=c;
        cout<<"name:"<<name<<",age:"<<age<<",usn:"<<usn<<",college:"<<college<<endl;
    }   
};
int main()
{
    student s1("Pavan",21,031,"cec");
    student s2("gagana",18,026,"cec");
    student s3("shalini",19,075,"cec");
    return 0;
}