
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <limits>
using namespace std;

const int MAX_CAPACITY = 200;


int getValidInt(const string &prompt)
{
    int value;
    while (true)
    {
        cout << prompt;
        cin >> value;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "[ERROR] Invalid input! Please enter a number.\n";
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
}


class Car
{
private:
    string ownerName;
    string plateNumber;
    bool   isParked;
    time_t entryTime;

public:
    Car()
    {
        ownerName   = "";
        plateNumber = "";
        isParked    = false;
        entryTime   = 0;
    }


    string getOwnerName()   const { return ownerName; }
    string getPlateNumber() const { return plateNumber; }
    bool   getIsParked()    const { return isParked; }
    time_t getEntryTime()   const { return entryTime; }


    void setOwnerName(string name)    { ownerName = name; }
    void setPlateNumber(string plate) { plateNumber = plate; }
    void setIsParked(bool status)     { isParked = status; }
    void setEntryTime(time_t t)       { entryTime = t; }

    
    void occupy(string name, string plate)
    {
        ownerName   = name;
        plateNumber = plate;
        isParked    = true;
        entryTime   = time(0);
    }

    void vacate()
    {
        ownerName   = "";
        plateNumber = "";
        isParked    = false;
        entryTime   = 0;
    }
};


class ParkingLot
{
private:
    Car    parkingSlots[MAX_CAPACITY];
    int    totalSlots;
    string dataFile;

    void saveData();   
    bool loadData();   

public:
    ParkingLot()
    {
        totalSlots = 0;
        dataFile   = "parking_data.txt";
        cout << "[SYSTEM] Parking Lot object created.\n";
    }

    ~ParkingLot()
    {
        saveData();
        cout << "\n[SYSTEM] Session saved to '" << dataFile << "'. Goodbye!\n";
    }

    void setupSlots();
    void parkCar();
    void removeCar();
    void showStatus();
};



void ParkingLot::setupSlots()
{
    if (loadData())
    {
        int occupied = 0;
        for (int i = 0; i < totalSlots; i++)
            if (parkingSlots[i].getIsParked()) occupied++;

        cout << "\n[SYSTEM] Previous session FOUND.\n";
        cout << "[SYSTEM] Restored " << totalSlots << " slots ("
             << occupied << " occupied).\n";
    }
    else
    {
        totalSlots = getValidInt("System Setup: How many parking slots? ");
        if (totalSlots > MAX_CAPACITY)
            totalSlots = MAX_CAPACITY;
        cout << "[SYSTEM] Fresh start with " << totalSlots << " empty slots.\n";
    }
}

void ParkingLot::parkCar()
{
    int foundSlot = -1;
    for (int i = 0; i < totalSlots; i++)
    {
        if (!parkingSlots[i].getIsParked())
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

    string name, plate;
    cout << "Enter Owner Name : ";
    getline(cin, name);

    cout << "Enter Plate Number : ";
    getline(cin, plate);

    parkingSlots[foundSlot].occupy(name, plate);

    time_t inTime = parkingSlots[foundSlot].getEntryTime();
    cout << ">> TICKET ISSUED at: " << ctime(&inTime);
    cout << ">> Car Parked Successfully.\n";

    saveData();   
}

void ParkingLot::removeCar()
{
    if (totalSlots == 0)
        return;

    string searchPlate;
    cout << "\n=== EXIT GATE ===\n";
    cout << "Enter Plate Number to Checkout: ";
    getline(cin, searchPlate);

    bool found = false;

    for (int i = 0; i < totalSlots; i++)
    {
        if (parkingSlots[i].getIsParked() && parkingSlots[i].getPlateNumber() == searchPlate)
        {
            time_t outTime = time(0);
            time_t inTime  = parkingSlots[i].getEntryTime();

            double seconds = difftime(outTime, inTime);
            int minutes = seconds / 60;
            if (minutes < 1) minutes = 1;
            int amount = minutes * 10;

            cout << "\n+-----------------------------+\n";
            cout << "|      OFFICIAL RECEIPT       |\n";
            cout << "+-----------------------------+\n";
            cout << "| Name  : " << parkingSlots[i].getOwnerName() << "\n";
            cout << "| Plate : " << parkingSlots[i].getPlateNumber() << "\n";
            cout << "| In    : " << ctime(&inTime);
            cout << "| Out   : " << ctime(&outTime);
            cout << "| Duration   : " << minutes << " Minutes\n";
            cout << "| BILL  : " << amount << " RS\n";
            cout << "+-----------------------------+\n";

            parkingSlots[i].vacate();

            cout << ">> Payment Received. Slot " << (i + 1) << " is Free.\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\n[ERROR] Vehicle with plate '" << searchPlate << "' not found!\n";

    saveData();  
}

void ParkingLot::showStatus()
{
    cout << "\n      PARKING LOT OVERVIEW      \n";
    cout << "___________________________________________________\n";

    for (int i = 0; i < totalSlots; i++)
    {
        cout << "| Slot " << (i + 1) << ": ";

        if (parkingSlots[i].getIsParked())
            cout << "[" << parkingSlots[i].getPlateNumber() << "] " << parkingSlots[i].getOwnerName();
        else
            cout << "[   EMPTY   ]";

        cout << endl;
    }
    cout << "|__________________________________________________|\n";
}

void ParkingLot::saveData()
{
    ofstream outFile(dataFile.c_str());
    if (!outFile)
    {
        cout << "[ERROR] Could not write to data file!\n";
        return;
    }

    outFile << totalSlots << "\n";

    for (int i = 0; i < totalSlots; i++)
    {
        outFile << parkingSlots[i].getPlateNumber() << "|"
                << parkingSlots[i].getOwnerName()   << "|"
                << parkingSlots[i].getIsParked()    << "|"
                << parkingSlots[i].getEntryTime()   << "\n";
    }

    outFile.close();
}

bool ParkingLot::loadData()
{
    ifstream inFile(dataFile.c_str());
    if (!inFile)
        return false;   

    if (!(inFile >> totalSlots) || totalSlots <= 0 || totalSlots > MAX_CAPACITY)
    {
        totalSlots = 0;
        return false;
    }
    inFile.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < totalSlots; i++)
    {
        string line;
        if (!getline(inFile, line)) break;

        stringstream ss(line);
        string plate, name, parkedFlag, timeStamp;

        getline(ss, plate,      '|');
        getline(ss, name,       '|');
        getline(ss, parkedFlag, '|');
        getline(ss, timeStamp,  '|');

        parkingSlots[i].setPlateNumber(plate);
        parkingSlots[i].setOwnerName(name);
        parkingSlots[i].setIsParked(parkedFlag == "1");
        parkingSlots[i].setEntryTime((time_t)atol(timeStamp.c_str()));
    }

    inFile.close();
    return true;
}


int main()
{
    cout << "==========================================\n";
    cout << "   SMART PARKING SYSTEM (OOP + Persistent) \n";
    cout << "==========================================\n";

    ParkingLot myLot;        
    myLot.setupSlots();

    int choice;
    while (true)
    {
        cout << "\n[1] Park Car   [2] Remove Car   [3] View Slots   [4] Exit\n";
        choice = getValidInt("Select Operation: ");

        if (choice == 1)      myLot.parkCar();
        else if (choice == 2) myLot.removeCar();
        else if (choice == 3) myLot.showStatus();
        else if (choice == 4) break;
        else cout << "[ERROR] Invalid Selection. Please enter 1, 2, 3, or 4.\n";
    }

    return 0;
}   