#include <iostream>


class Vehicle {
public:
    void start() {
        std::cout << "Vehicle started.\n";
    }
    
    virtual void makeSound() {
        std::cout << "Generic vehicle sound.\n";
    }
};


class Car : public Vehicle {
public:
    void honk() {
        std::cout << "Car honking!\n";
    }
    
    void makeSound() override { 
        std::cout << "Vroom vroom!\n";
    }
};

int main() {
    Car myCar;
    myCar.start();      
    myCar.honk();       

    Vehicle* genericVehicle = &myCar;
    genericVehicle->makeSound();      

    return 0;
}