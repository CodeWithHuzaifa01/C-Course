#include <iostream>
using namespace std;

class Point
{

public:
    int x, y;

    void displayCoordinates()
    {
        cout << "Points coordinates are :(" << x << "°Xaixs , " << y << "°Yaxis" << ") " << endl;
    }
};

int main()
{

    Point p1;
    p1.x = 65;
    p1.y = 55;
    p1.displayCoordinates();
    return 0;
}