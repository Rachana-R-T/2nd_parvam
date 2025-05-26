#include <iostream>
#include <string>
using namespace std;


class Person {
public:
    string name;
    int age;

    void getPersonInfo() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showPersonInfo() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Student : public Person {
public:
    int studentID;

    void getStudentInfo() {
        getPersonInfo();
        cout << "Enter student ID: ";
        cin >> studentID;
    }

    void showStudentInfo() {
        showPersonInfo();
        cout << "Student ID: " << studentID << endl;
    }
};

class GraduateStudent : public Student {
public:
    string researchTopic;

    void getGraduateInfo() {
        getStudentInfo();
        cout << "Enter research topic: ";
        cin.ignore();
        getline(cin, researchTopic);
    }

    void showGraduateInfo() {
        showStudentInfo();
        cout << "Research Topic: " << researchTopic << endl;
    }
};

class Employee {
public:
    int empID;
    string department;

    void getEmployeeInfo() {
        cout << "Enter employee ID: ";
        cin >> empID;
        cout << "Enter department: ";
        cin >> department;
    }

    void showEmployeeInfo() {
        cout << "Employee ID: " << empID << "\nDepartment: " << department << endl;
    }
};

class TeachingAssistant : public Student, public Employee
{
    public:
    void getTAInfo() {
        getStudentInfo();
        getEmployeeInfo();
    }

    void showTAInfo() {
        showStudentInfo();
        showEmployeeInfo();
    }
};

class Professor : public Person {
public:
    string subject;

    void getProfessorInfo() {
        getPersonInfo();
        cout << "Enter subject taught: ";
        cin >> subject;
    }

    void showProfessorInfo() {
        showPersonInfo();
        cout << "Subject: " << subject << endl;
    }
};


class ResearchProfessor : public Professor, public GraduateStudent 
{
    public:
    void getResearchProfessorInfo() {
        cout << "--- Enter Professor Info ---" << endl;
        getProfessorInfo();
        cout << "--- Enter Graduate Student Info ---" << endl;
        getGraduateInfo();
    }

    void showResearchProfessorInfo() {
        cout << "\n--- Research Professor Info ---" << endl;
        showProfessorInfo();
        showGraduateInfo();
    }
};

int main()
{
    ResearchProfessor rp;
    rp.getResearchProfessorInfo();
    rp.showResearchProfessorInfo();

    return 0;
}
