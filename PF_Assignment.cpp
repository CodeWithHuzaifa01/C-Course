#include <iostream>
#include <string>

using namespace std;

struct Student {
    int SAP;
    string Name;
    float GPA;
};

int main() {
    int num;
    
    cout << "Enter number of students: ";
    cin >> num;

    Student* stds = new Student[num];

    for (int i = 0; i < num; i++) {
        cout << "Enter details for student " << i + 1 << endl;
        cout << "SAP: ";
        cin >> stds[i].SAP;
        cout << "Name: ";
        cin >> stds[i].Name;
        cout << "GPA: ";
        cin >> stds[i].GPA;
    }

    cout << "Student Records:" << endl;
    cout << "SAP Name GPA" << endl;
    
    for (int i = 0; i < num; i++) {
        cout << stds[i].SAP << " " << stds[i].Name << " " << stds[i].GPA << endl;
    }

    delete[] stds;
    
    return 0;
}