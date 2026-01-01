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
    void checkSystem()
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
    void checkSystem()
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
            PetrolEngine::checkSystem();
            {
                cout << "(System: Using Petrol Engine)" << endl;
            }
        }
        else if (batteryLevel > 0)
        {
            ElectricMotor::checkSystem();
            {
                cout << "(System: Using Electric Battery)" << endl;
            }
        }
        else
        {
            cout << "Car is dead. Please refuel or charge." << endl;
        }
    }
    void fullDiagnostics()
    {
        PetrolEngine::checkSystem();
        ElectricMotor::checkSystem();
    }
};
int main()
{
    HybridCar myCar;

    cout << "--- Running System Check ---" << endl;
    myCar.fullDiagnostics(); 

    int userInput1;
    cout << "\nGive me the User value:-" << endl;
    cin >> userInput1;

    myCar.refuel(userInput1);
    myCar.charge(userInput1);

    cout << "--- Starting Drive ---" << endl;
    myCar.driveHybrid();

    return 0;
}