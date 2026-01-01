#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name; /*="Huzaifa Tahir"*/
    int age;
    char Fav;

    cout << "What is Your Name:-\n" /*name*/ << endl;
    getline(cin, name);

    cout << "What is Your age?" << endl;
    cin >> age;

    cout << "What is your Favriote Character: " << endl;
    cin >> Fav;

    cout << "My Name is " << name << " and I am  " << age << "Year Old, My FAvriote character is:- " << Fav << "." << endl;
    return 0;
}