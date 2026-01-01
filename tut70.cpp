#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);

    void Printdata()
    {
        cout << "Your number is " << a << " + " << b << "i." << endl;
    }
};

Complex::Complex(int x, int y) // ----> This is a default paramaterized constructer as it takes 2 parameters.
{
    a = x;
    b = y;
    // cout<<"Hello world";
}

int main()
{ // Implecit call;
    Complex d(6, 8);
    d.Printdata();

    // Explecit call;
    Complex f = Complex(7, 3);
    f.Printdata();

    return 0;
}