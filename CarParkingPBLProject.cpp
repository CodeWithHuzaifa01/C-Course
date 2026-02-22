#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;

struct Car
{
    string ownerName;
    string plateNumber;
    bool isParked;
    time_t entryTime;
};

const int MAX_CAPACITY = 200;
Car parkingSlots[MAX_CAPACITY];
int totalSlots = 0;

string getCurrentTime()
{
    time_t now = time(0);
    return ctime(&now);
}

void parkCar()
{
    int foundSlot = -1;
    for (int i = 0; i < totalSlots; i++)
    {
        if (parkingSlots[i].isParked == false)
        {
            foundSlot = i;
            break;
        }
    }

    if (foundSlot == -1)
    {
        cout << "\n[CRITICAL] PARKING FULL! No slots available.\n";
        return;
    }

    cout << "\n=== ENTRY GATE (Slot " << foundSlot + 1 << ") ===\n";

    cin.ignore();

    cout << "Enter Owner Name : ";
    getline(cin, parkingSlots[foundSlot].ownerName);

    cout << "Enter Plate Number : ";
    getline(cin, parkingSlots[foundSlot].plateNumber);

    parkingSlots[foundSlot].entryTime = time(0);
    parkingSlots[foundSlot].isParked = true;

    cout << ">> TICKET ISSUED at: " << ctime(&parkingSlots[foundSlot].entryTime);
    cout << ">> Car Parked Successfully.\n";
}

void removeCar()
{
    if (totalSlots == 0)
        return;

    string searchPlate;
    cout << "\n=== EXIT GATE ===\n";

    cin.ignore();
    cout << "Enter Plate Number to Checkout: ";
    getline(cin, searchPlate);

    bool found = false;

    for (int i = 0; i < totalSlots; i++)
    {
        if (parkingSlots[i].isParked == true && parkingSlots[i].plateNumber == searchPlate)
        {

            time_t exitTime = time(0);

            double seconds = difftime(exitTime, parkingSlots[i].entryTime);

            int minutes = seconds / 60;

            if (minutes < 1)
                minutes = 1;

            int amount = minutes * 10;

            cout << "\n+-----------------------------+\n";
            cout << "|      OFFICIAL RECEIPT       |\n";
            cout << "+-----------------------------+\n";
            cout << "| Name  : " << parkingSlots[i].ownerName << "\n";
            cout << "| Plate : " << parkingSlots[i].plateNumber << "\n";
            cout << "| In    : " << ctime(&parkingSlots[i].entryTime);
            cout << "| Out   : " << ctime(&exitTime);
            cout << "| Duration   : " << minutes << " Minutes\n";
            cout << "| BILL  : " << amount << " RS\n";
            cout << "+-----------------------------+\n";

            parkingSlots[i].isParked = false;
            parkingSlots[i].ownerName = "";
            parkingSlots[i].plateNumber = "";

            cout << ">> Payment Received. Slot " << (i + 1) << " is Free.\n";
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\n[ERROR] Vehicle with plate '" << searchPlate << "' not found!\n";
    }
}

void showStatus()
{
    cout << "\n      PARKING LOT OVERVIEW      \n";
    cout << "___________________________________________________\n";

    for (int i = 0; i < totalSlots; i++)
    {
        cout << "| Slot " << (i + 1) << ": ";

        if (parkingSlots[i].isParked)
        {
            cout << "[" << parkingSlots[i].plateNumber << "] " << parkingSlots[i].ownerName;
        }
        else
        {
            cout << "[   EMPTY   ]";
        }
        cout << endl;
    }
    cout << "|__________________________________________________|\n";
}

int main()
{
    cout << "==========================================\n";
    cout << "   SMART PARKING SYSTEM (Real-Time)       \n";
    cout << "==========================================\n";

    cout << "System Setup: How many parking slots? ";
    cin >> totalSlots;

    if (totalSlots > MAX_CAPACITY)
        totalSlots = MAX_CAPACITY;

    int choice;
    while (true)
    {
        cout << "\n[1] Park Car   [2] Remove Car   [3] View Slots   [4] Exit\n";
        cout << "Select Operation: ";
        cin >> choice;

        if (choice == 1)
            parkCar();
        else if (choice == 2)
            removeCar();
        else if (choice == 3)
            showStatus();
        else if (choice == 4)
            break;
        else
            cout << "Invalid Selection.\n";
    }
    return 0;
}