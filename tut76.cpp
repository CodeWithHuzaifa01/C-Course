#include<iostream>
using namespace std;
    // Base Class
    class Employee{
        public:
        int id;
        float salary;
        Employee(){}
        Employee(int InpId){
            id = InpId;
            salary = 35.0;
        }
        void getData(){
            cout<<"The (Huzaifa and Ahmad) id is "<<id<<" and salary is:- "<<salary<<"."<<endl;
        }
    };

     // Derived Class syntax
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
    Notes:-
1) Default visibility mode is private
2) Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3) Private Visibility Mode: Public members of the base class become private members of the derived class
4) Private members are never inherited
*/



// Creating a Programmer class derived from Employee Base class
 class Programmer :  public Employee{
    public:
    int languageCode;
    Programmer(int InpId){
        id =InpId;
        languageCode = 9;
    }
    void getData(){
        cout<<"The (Khan and King) languageCode is "<<languageCode<<" and id is:- "<<id<<"."<<endl;
   
    }
 };
int main(){
    Employee Huzaifa(2), Ahmad(3);
    Programmer Khan(4) , King(5);

    Huzaifa.getData();
    Ahmad.getData();

    Khan.getData();
    King.getData();
return 0;
}