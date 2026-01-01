#include <iostream>
using namespace std;
class complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int SumRealComplex(complex, complex);
    int SumCompComplex(complex, complex);
};


class complex
{
    int a, b;
    friend class Calculator;
    // friend int Calculator::SumRealComplex(complex, complex);
    // friend int Calculator::SumCompComplex(complex, complex);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i " << endl;
    }
};

int Calculator::SumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
};

int Calculator::SumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
};

int main()
{
    complex o1, o2;
    o1.setNumber(5, 6);
    o2.setNumber(4, 12);
    Calculator Calc;
    int res = Calc.SumRealComplex(o1, o2);
    cout << "The sum of Real part of o1 and o2 is:- " << res << "." << endl;
    int resc = Calc.SumCompComplex(o1, o2);
    cout << "The sum of Complex part of o1 and o2 is:- " << resc << "." << endl;

    return 0;
}
