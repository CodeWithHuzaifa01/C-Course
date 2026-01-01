#include <iostream>
using namespace std;

class PetrolEngine
{
protected:
    int petrolLevel;

public:
    void refuel(int a)
    {
        petrolLevel = a;
    }
    void drivePetrol()
    {
        cout << "Driving on Petrol... Brrrrrr!" << endl;
    }
};

class ElectricMotor
{
protected:
    int batteryLevel;

public:
    void charge(int a)
    {
        batteryLevel = a;
    }
    void driveElectric()
    {
        cout << "Driving on Electric... Sshhhhh!" << endl;
    }
};

class HybridCar : public PetrolEngine, public ElectricMotor
{
public:
    void driveHybrid()
    {
        if (petrolLevel >= 100)
        {
            drivePetrol();
            {
                cout << "(System: Using Petrol Engine)" << endl;
            }
        }
        else if (batteryLevel > 0)
        {
            driveElectric();
            {
                cout << "(System: Using Electric Battery)" <<endl;
            }
        }
        else
        {
            cout << "Car is dead. Please refuel or charge." << endl;
        }
    }
};
int main()
{
    HybridCar HC1;
    int userInput1;
    cout << "Give me the User value:-" << endl;
    cin >> userInput1;
    HC1.charge(userInput1);
    HC1.refuel(userInput1);
    HC1.driveHybrid();
    return 0;
}