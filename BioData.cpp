#include <iostream>
using namespace std;

int main()
{
    int age;
    char skinColor;
    long salary;
    float height;
    string Name;
    cout << "Whats your Name?" << endl;
    getline(cin, Name);
    cout << "Whats your age?" << endl;
    cin >> age;

    cout << "Whats your salary?" << endl;
    cin >> salary;

    cout << "Whats your height?" << endl;
    cin >> height;
                cout<<"This is my Boigraphy"<<endl;
    cout << "My name is " << Name << "." << endl;
    cout << "I am " << age << " Year Old." << endl;
    cout << "My salary is " << salary << "$." << endl;
    cout << "My height is " << height << "feet." << endl;
    return 0;
}