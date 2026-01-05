#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
protected:
    int a, b;

public:
    void SetSimple(int x, int y)
    {
        a = x;
        b = y;
    }
    void ProcessSimple()
    {
        cout << "The sum is:- " << a + b << endl;
        cout << "The Product is:- " << a * b << endl;
        cout << "The Subtraction is:- " << a - b << endl;
        cout << "The Division is:- " << a / b << endl;
    }
    void Display()
    {
        ProcessSimple();
    }
};

class SceintificCalculator
{
protected:
    int c, d;

public:
    void SetSceintific(int x, int y)
    {
        c = x;
        d = y;
    }
    void processScientific()
    {
        cout << "The value of cos(a) is: " << cos(c) << endl;
        cout << "The value of sin(a) is: " << sin(c) << endl;
        cout << "The value of Tang(b) is: " << tan(d) << endl;
        cout << "The value of cos(b) is: " << cos(d) << endl;
    }
    void Display()
    {
        processScientific();
    }
};

class HybridCalculator : public SimpleCalculator, public SceintificCalculator
{
};
int main()
{
    HybridCalculator calc;

    // Test Simple
    calc.SetSimple(10, 5);
    // calc.ProcessSimple();

    // Test Scientific
    calc.SetSceintific(10, 5);
    // calc.processScientific();

    calc.SimpleCalculator::Display();
    calc.SceintificCalculator::Display();
    return 0;
}