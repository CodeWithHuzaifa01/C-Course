#include <iostream>
using namespace std;
//  class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };


class Parent1
{
protected:
    int num1;

public:
    void set_Num1(int a)
    {
        num1 = a;
    }
    void greet(){
        cout<<"Hello from Parent1."<<endl;
    }
};

class Parent2
{
protected:
    int num2;

public:
    void set_Num2(int a)
    {
        num2 = a;
    }
    void greet(){
        cout<<"Hello from Parent2."<<endl;
    }
};

class Child : public Parent1, public Parent2
{
public:
    void display()
    {
        cout << "The Value of The num1 is:- " << num1 << "." << endl;
        cout << "The Value of The num2 is:- " << num2 << "." << endl;
        cout << "The Product of these Value is:- " << num1 * num2 << "." << endl;
    }
};

int main()
{
    Child x;

    x.set_Num1(60);
    x.set_Num2(2);
    x.Parent1::greet();
    x.Parent2::greet();
    x.display();
    return 0;
}