#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked whenever an object is created.
    Complex(void); // Constructor declaration.

    void Printdata()
    {
        cout << "Your number is " << a << " + " << b << "i." << endl;
    }
};

Complex::Complex(void) // ----> This is a default constructor as it takes no parameters.
{
    a = 10;
    b = 50;
    // cout<<"Hello world";
}

int main()
{
    Complex d;
    d.Printdata();

    return 0;
}
/*  Charesteristic of Constructer
1. It should be declared in the public section of the class.
2. They are automatically invoked whenever Object is created.
3. They cannot return values and do not have return type.
4. It can have default Arguments.
5. We cannot refer to their Address.
*/