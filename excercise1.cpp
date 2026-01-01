              /*   The programm is executed by Huxaifa tahir   */ 
              //Challenge Gemini of 1 to until 24 epi.
#include <iostream>
using namespace std;

class Tollbooth
{
    int TotleMoney = 0;
    int TotleCar = 0;
    static int GrandTotleCar;

public:
    void payingCar()
    {
        TotleMoney = TotleMoney + 50;
        TotleCar = TotleCar + 1;
        GrandTotleCar++;
        cout << "car paid: 50 RS" << endl;
    };
    void nonPayingCar()
    {
        TotleMoney = TotleMoney + 0;
        TotleCar = TotleCar + 1;
        GrandTotleCar++;
        cout << "print VIP car FREE" << endl;
    }

    void display()
    {
        cout << "Money Collected :-" << TotleMoney << "." << endl;
        cout << "Totle car At the booths:- " << TotleCar << "." << endl;
    }
    static void showtotle()
    {
        cout << "TOTLE CAR ACROSS ALL BOOTHS. " << GrandTotleCar << endl;
    }
};
int Tollbooth ::GrandTotleCar = 0;
int main()
{
    Tollbooth booth1, booth2;
    int choice;
    while (true)
    {
        cout << "Toll Plaza Menu" << endl;
        cout << "A car passes Through Booth1 and Pays." << endl;
        cout << "A car passes Through Booth1 and (VIP/Non-Paying)." << endl;
        cout << "A car passes Through Booth2 and Pays." << endl;
        cout << "A car passes Through Booth2 and (VIP/Non-Paying)." << endl;
        cout << "Exit: and show Totle." << endl;
        cout << "Enter your choice " << endl;

        cin >> choice;

        if (choice == 1)
        {
            booth1.payingCar();

            cout << "The Car Paying the tax." << endl;
        }
        else if (choice == 2)
        {
            booth1.nonPayingCar();
            cout << "This Car is VIP. " << endl;
        }
        else if (choice == 3)
        {
            booth2.payingCar();
            cout << "The Car Paying the tax." << endl;
        }
        else if (choice == 4)
        {
            booth2.nonPayingCar();
            cout << "This Car is VIP. " << endl;
        }
        else if (choice == 5)
        {
            cout << "Exiting... Generating Report. " << endl;
            booth1.display();
            cout << "-----------------------------" << endl;
            booth2.display();
            Tollbooth::showtotle();
            break;
        }
        else
        {
            cout << "inviled Choice! Try again " << endl;
        }
    }

    return 0;
}




            //Written by Gemini.
// #include <iostream>
// using namespace std;

// class Tollbooth
// {
//     int TotleMoney = 0;
//     int TotleCar = 0;
//     static int GrandTotleCar;

// public:
//     void payingCar()
//     {
//         TotleMoney = TotleMoney + 50;
//         TotleCar = TotleCar + 1;
//         GrandTotleCar++;
//         cout << "Car paid: 50 RS" << endl;
//     }

//     void nonPayingCar()
//     {
//         // TotleMoney + 0 is fine, or just don't touch money at all.
//         TotleCar = TotleCar + 1;
//         GrandTotleCar++;
//         cout << "VIP car: FREE" << endl;
//     }

//     void display()
//     {
//         cout << "--------------------------------" << endl;
//         // I added these lines so you actually see the result!
//         cout << "Money Collected: " << TotleMoney << endl;
//         cout << "Cars at this Booth: " << TotleCar << endl;
//         cout << "--------------------------------" << endl;
//     }

//     // Helper to see the static variable
//     static void showTotal() {
//         cout << "TOTAL CARS ACROSS ALL BOOTHS: " << GrandTotleCar << endl;
//     }
// };

// int Tollbooth ::GrandTotleCar = 0;

// int main()
// {
//     Tollbooth booth1, booth2;
//     int choice;

//     // START THE LOOP
//     while (true)
//     {
//         cout << "\n--- TOLL PLAZA MENU ---" << endl;
//         cout << "1. Booth 1: Paying" << endl;
//         cout << "2. Booth 1: VIP" << endl;
//         cout << "3. Booth 2: Paying" << endl;
//         cout << "4. Booth 2: VIP" << endl;
//         cout << "5. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         // --- LOGIC IS NOW INSIDE THE LOOP ---
//         if (choice == 1)
//         {
//             booth1.payingCar();
//         }
//         else if (choice == 2)
//         {
//             booth1.nonPayingCar();
//         }
//         else if (choice == 3)
//         {
//             booth2.payingCar();
//         }
//         else if (choice == 4)
//         {
//             booth2.nonPayingCar();
//         }
//         else if (choice == 5)
//         {
//             cout << "Exiting... Generating Report." << endl;
//             booth1.display();
//             booth2.display();
//             Tollbooth::showTotal(); // Show the static count
//             break; // This breaks the loop!
//         }
//         else
//         {
//             cout << "Invalid Choice! Try again." << endl;
//         }
//         // --- LOGIC ENDS HERE ---

//     } // <--- THE LOOP CLOSES HERE

//     return 0;
// }