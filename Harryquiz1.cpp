                  /*   The programm is executed by Huxaifa tahir   */
#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    double x, y;
    friend void distance(Point p1, Point p2);

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

void distance(Point p1, Point p2)
{

    double x_diff = p2.x - p1.x;
    double y_diff = p2.y - p1.y;
    double dist = sqrt(pow(x_diff, 2) + pow(y_diff, 2));
    cout << "The distance is: " << dist << "." << endl;
}

int main()
{
    Point P1(1, 1);
    P1.displayPoints();
    Point P2(1, 1);
    P2.displayPoints();
    distance(P1, P2);

    Point P3 = Point(0, 1);
    P3.displayPoints();
    Point P4 = Point(0, 6);
    P4.displayPoints();
    distance(P3, P4);

    return 0;
}