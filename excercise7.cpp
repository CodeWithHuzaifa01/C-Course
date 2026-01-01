#include <iostream>
using namespace std;

class Car
{

    int speed;
    static int totleCar;
    friend void policeCheck(Car c);

public:
    void setSpeed(int s)
    {
        speed = s;
        totleCar++;
    }

    static void showcount(){
        cout<<"Totle cars counts. "<<totleCar<<endl;
    } 
};
int Car ::totleCar = 0;
void policeCheck(Car c)
{
    if (c.speed >= 120)
    {
        cout << "Over speeding: Ticket issued!" << endl;
    }
    else
    {
        cout << "Good Drivers No over speeding." << endl;
    }
}

int main()
{
    Car traffic[3];
    int userInput;
    for (int i = 0; i < 3; i++)
    {
       cout<<"Enter the speeding by a Car:-"<<i + 1<<endl;
       cin>>userInput;
       traffic[i].setSpeed(userInput);
       policeCheck(traffic[i]);
    }
    Car ::showcount();
     
    return 0;
}