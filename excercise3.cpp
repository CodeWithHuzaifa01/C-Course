#include <iostream>
using namespace std;
class Student
{
    int rollNumber;
    int Marks;

public:
    void setid()
    {
        cout << "Enter Roll No " << "Enter Marks." << endl;
        cin >> rollNumber >> Marks;
    }
    void getid()
    {
        cout << "Roll Number:- " << rollNumber << " his Marks is:-" << Marks << "." << endl;
    }
};

int main()
{
    Student class9[3];
    for (int i = 0; i < 3; i++)
    {
        class9[i].setid();
    }
    for (int i = 0; i < 3; i++)
    {
        class9[i].getid();
    }

    return 0;
}