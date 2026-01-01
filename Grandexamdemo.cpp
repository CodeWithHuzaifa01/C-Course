#include <iostream>
using namespace std;

class Car
{
    friend void setVIP(Car &c);
    int tax = 50;
    static int totleCar;

public:
    Car()
    {
        cout << "Car arrived at Toll Plaza." << endl;
        totleCar++;
    }
     void DisplayTotleTax(){
        cout<<"Car pays Totle Tax!"<<tax<<endl;
     }
    static void DisplayTotle()
    {
        cout << "Total Cars passed:-" << totleCar << "." << endl;
    }
};
int Car::totleCar = 0;

void setVIP(Car &c)
{
     c.tax = 0;

    cout << "This is a VIP car! No TEX PAY."<<c.tax <<"."<< endl;
};

int main()
{
    Car c1;
    c1.DisplayTotleTax();
    Car c2;
    setVIP(c2);
    Car::DisplayTotle();
    return 0;
}