#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    int rollNumber;
    string department;

public:
    void inputStudent() {
        inputPerson();
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Department: ";
        cin.ignore();
        getline(cin, department);
    }

    void displayStudent() {
        displayPerson();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Department: " << department << endl;
    }
};

class GraduateStudent : public Student {
protected:
    string researchTopic;
    string supervisorName;

public:
    void inputGraduate() {
        inputStudent();
        cout << "Enter Research Topic: ";
        getline(cin, researchTopic);
        cout << "Enter Supervisor Name: ";
        getline(cin, supervisorName);
    }

    void displayGraduate() {
        displayStudent();
        cout << "Research Topic: " << researchTopic << endl;
        cout << "Supervisor Name: " << supervisorName << endl;
    }
};

int main() {
    GraduateStudent gs;
    
    cout << "===== Enter Graduate Student Details =====\n";
    gs.inputGraduate();
    
    gs.displayGraduate();
    
    return 0;
}