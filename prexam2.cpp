#include <iostream>
using namespace std;

class Car
{
    int carID;
    static int totalCars;

public:
    Car(int id)
    {
        carID = id;
        totalCars++;
        cout << "Car " << carID << " Parked. Total Cars: " << totalCars << "." << endl;
    }
    Car(Car &original)
    {
        carID = original.carID;
        cout << "ALERT: Duplicate Ticket Issued for Car: " << original.carID << "." << endl;
    }
    ~Car()
    {
        totalCars--;
        cout << "Car " << carID << " Left the lot. Total Cars: " << totalCars << "." << endl;
    }
};
int Car::totalCars = 0;
int main()
{
    Car c1(101);
    Car c2(202);
    {
        Car c3(777);
    }
    // Car ticketcopy(c1);                     //---->This is copy destructor
    Car ticketCopy = c1;                       //---->This is copy destructor

    return 0;
}