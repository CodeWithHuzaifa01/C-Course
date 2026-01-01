#include <iostream>
using namespace std;
class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoints()
    {
        cout << "The points is:-(" << x << " , " << y << ")" << endl;
    }
};
int main()
{
    Point p1(6, 9);
    p1.displayPoints();

    Point p2(7, 2);
    p2.displayPoints();
    return 0;
}