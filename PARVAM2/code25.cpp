#include<iostream>
using namespace std;

class DemoPublic {
public:
    int x;

    void setX(int val) {
        x = val;
    }

    void showX() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    DemoPublic obj;
    obj.x = 10;           // Allowed: public member
    obj.showX();          // Allowed
    return 0;
}