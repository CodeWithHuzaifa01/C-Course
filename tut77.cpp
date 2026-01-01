#include <iostream>
using namespace std;
class Base
{
    int Data1; // Private by defualt and is not Inheritable
public:
    int Data2;
    void setData();
    int getData1();
    int getData2();
};
void Base::setData()
{
    Data1 = 50;
    Data2 = 10;
}

int Base::getData1()
{
    return Data1;
}
int Base::getData2()
{
    return Data2;
}

class Derived : public Base
{ //  Class is being Derived Publically.
    int Data3;

public:
    void setProcess();
    void Display();
};

void Derived::setProcess()
{
    Data3 = Data2 * getData1(); 
};

void Derived::Display()
{
    cout << "The value of Data1 is:- " << getData1() << "." << endl;
    cout << "The Value of Data2 is:- " << Data2 << "." << endl;
    cout << "The Value get by Data3 is:- " << Data3 << "." << endl;
}

int main()
{
    Derived drv;
    drv.setData();
    drv.setProcess();
    drv.Display();
    return 0;
}