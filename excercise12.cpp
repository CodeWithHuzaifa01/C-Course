#include <iostream>
using namespace std;
class Calculater;
class Point
{
    friend class Calculater;
    // friend int sumCoordinates(Point p);
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
};

class Calculater
{

public:
    int sumCoordinates(Point p)
    {
        return p.x + p.y;
    }
};
int main()
{
    Point p1(23, 78);
    Point p2(34, 56);
    Calculater calc;
    int result1 = calc.sumCoordinates(p1);
    int result2 = calc.sumCoordinates(p2);
    cout << "Sum of P1: " << result1 << "." << endl;
    cout << "Sum of P2: " << result2 << "." << endl;

    return 0;
}