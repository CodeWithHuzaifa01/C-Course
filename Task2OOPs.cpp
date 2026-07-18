
// #include <iostream>
// #include <string>
// using namespace std;

// class Employee {
// protected:
//     int employeeID;
//     string name;
//     float salary;

// public:
//     void inputEmployee() {
//         cout << "Enter Employee ID: ";
//         cin >> employeeID;
//         cin.ignore();
//         cout << "Enter Name: ";
//         getline(cin, name);
//         cout << "Enter Salary: ";
//         cin >> salary;
//     }

//     void displayEmployee() {
//         cout << "ID: " << employeeID << endl;
//         cout << "Name: " << name << endl;
//         cout << "Salary: " << salary << endl;
//     }
// };

// class Teacher : public Employee {
// private:
//     string subject;
//     string qualification;

// public:
//     void inputTeacher() {
//         inputEmployee();
//         cin.ignore();
//         cout << "Enter Subject: ";
//         getline(cin, subject);
//         cout << "Enter Qualification: ";
//         getline(cin, qualification);
//     }

//     void displayTeacher() {
//         displayEmployee();
//         cout << "Subject: " << subject << endl;
//         cout << "Qualification: " << qualification << endl;
//     }
// };

// class Administrator : public Employee {
// private:
//     string department;
//     int workingHours;

// public:
//     void inputAdmin() {
//         inputEmployee();
//         cin.ignore();
//         cout << "Enter Department: ";
//         getline(cin, department);
//         cout << "Enter Working Hours: ";
//         cin >> workingHours;
//     }

//     void displayAdmin() {
//         displayEmployee();
//         cout << "Department: " << department << endl;
//         cout << "Working Hours: " << workingHours << endl;
//     }
// };

// int main() {
//     Teacher t;
//     Administrator a;

//     cout << "--- Enter Teacher Details ---" << endl;
//     t.inputTeacher();

//     cout << "\n--- Enter Administrator Details ---" << endl;
//     a.inputAdmin();

//     cout << "\n--- Teacher Record ---" << endl;
//     t.displayTeacher();

//     cout << "\n--- Administrator Record ---" << endl;
//     a.displayAdmin();

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Person {
// public:
//     string name;
//     int age;

//     // Constructor
//     Person(string n, int a) {
//         name = n;
//         age = a;
//     }

//     // Copy Constructor
//     Person(const Person& p) {
//         name = p.name;
//         age = p.age;
//         cout << "Copy constructor called!" << endl;
//     }
// };

// int main() {
//     Person p1("Alice", 25);
//     Person p2 = p1;  // Copy constructor called

//     cout << p2.name << " " << p2.age << endl;
// }


// #include<iostream>
// using namespace std;

// class book{
//     public:
//     string name;
//     int pages;

//     book(string n , int p){
//         name = n;
//         pages = p;
//     }

//     book(const book& newbook){
//         name = newbook.name;
//         pages = newbook.pages;
//         cout<<"Copy Constructer Called. "<<endl;
//     }
// };

// int main(){
//     book b1("OOPs" , 70);
//     book b2 = b1;
//     cout<<"The Book name is "<<b2.name<<" and have " <<b2.pages <<" number pages."<<endl;

// return 0;
// }



#include<iostream>
using namespace std;
    class Student{
    public:
    string nameStudent;
    static int count;
    Student(string s){
        nameStudent  = s;
        ++count;
        cout<<"The name of students is:- "<<nameStudent<<endl;
        cout<<"The numbers count for stusdents is:- "<<count<<endl;
    }
};
int Student::count = 0;
int main(){
    Student s1("Ali"), s2("Hamza");
    cout<<"Totle Numbers of Students is "<<Student::count<<endl;


return 0;
}