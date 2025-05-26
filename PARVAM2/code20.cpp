#include <iostream>
using namespace std;

class car{
    string model;
    int year;

    public:
        car(){
            model="unknown";
            year=0;
        }

        car(string m){
            model=m;
            year=0;
        }

        car(string m, int y){
            model=m;
            year=y;
        }
        void display(){
              cout<<"model:"<<model<<",year:"<<year<<endl;
    }      
};
int main(){
        car c1;
        car c2("toyota");
        car c3("honda",2020);
        c1.display();
        c2.display();
        c3.display();
        
        return 0;
}