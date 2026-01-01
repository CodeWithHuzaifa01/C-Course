#include <iostream>
using namespace std;

class Distance
{
    int Meters;
    // float Kilometers;
public:
    Distance() {}
    Distance(int m)
    {
        Meters = m;
    }
    Distance(float km)
    {
        Meters = km * 1000;
    }
    void Display();
};

void Distance::Display()
{
    cout << "The Distance is: " << Meters << " meters." << endl;
}

int main()
{
    Distance d1;
    int m_in;
    cout << "Enter distance in Meters? " << endl;
    cin >> m_in;
    d1 = Distance(m_in);
    d1.Display();

    float km_in;
    cout << "Enter distance in Kilometers? " << endl;
    cin >> km_in;
    d1 = Distance(km_in);
    d1.Display();

    return 0;
}