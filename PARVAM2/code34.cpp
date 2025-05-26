#include <iostream>
#include <string>
#include <iomanip> 

class Person 
{
    protected:
    std::string name;
    int age;
    
    public:
    
    Person(const std::string& n, int a) : name(n), age(a) {}

    void displayPersonInfo() const 
    {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

class Patient : public Person
{
    private:
    std::string disease;
    double billAmount;
    public:
    Patient(const std::string& n, int a, const std::string& d, double bill)
    : Person(n, a), disease(d), billAmount(bill) {}
    void updateBasicDetails(const std::string& newName, int newAge) 
    {
        name = newName; 
        age = newAge;   
        std::cout << "Patient's basic details updated." << std::endl;
    }

    void updateMedicalDetails(const std::string& newDisease, double newBill) 
    {
        disease = newDisease;
        billAmount = newBill;
        std::cout << "Patient's medical details updated." << std::endl;
    }

    void displayPatientRecord() const
    {
        std::cout << "Patient Name: " << name << std::endl;
        std::cout << "Patient Age: " << age << std::endl;
        std::cout << "Disease: " << disease << std::endl;
        std::cout << "Bill Amount: $" << std::fixed << std::setprecision(1) << billAmount << std::endl;
        std::cout << "Reviewing patient's condition: " << disease << std::endl;
    }
};


int main() {
    
    Patient johnDoe("John Doe", 45, "Pneumonia", 3200.5);

    std::cout << "--- Hospital Management System ---" << std::endl;
    std::cout << "--- Patient Record ---" << std::endl;

    johnDoe.displayPatientRecord();
    std::cout << std::endl;

    std::cout << "--- Updating Patient Record ---" << std::endl;
    johnDoe.updateBasicDetails("Jonathan Doe", 46);
    johnDoe.updateMedicalDetails("Recovering from Pneumonia", 3500.0);
    std::cout << std::endl;

    std::cout << "--- Updated Patient Record ---" << std::endl;
    johnDoe.displayPatientRecord();
    std::cout << std::endl;

    return 0;
}