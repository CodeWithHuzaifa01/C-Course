#include <iostream>
#include <string>

using namespace std;

// --- Global Variables ---
// We make the array size 100. This is large enough to feel "dynamic"
// without actually using complex dynamic memory.
const int MAX_CARS = 100; 

string parkingSlots[MAX_CARS]; // Array to store license plates
int totalCars = 0;             // Keeps track of how many cars are currently parked

// --- Function Prototypes ---
void parkCar();
void removeCar();
void showStatus();

int main() {
    int choice;
    
    cout << "========================================" << endl;
    cout << "   SMART PARKING SYSTEM (Simple)        " << endl;
    cout << "========================================" << endl;

    // A simple menu loop
    while (true) {
        cout << "\n--- Main Menu ---" << endl;
        cout << "1. Park a Car (Entry)" << endl;
        cout << "2. Remove a Car (Exit & Bill)" << endl;
        cout << "3. View Parking Status" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            parkCar();
        } else if (choice == 2) {
            removeCar();
        } else if (choice == 3) {
            showStatus();
        } else if (choice == 4) {
            cout << "Exiting program..." << endl;
            break; // Breaks the loop to stop the program
        } else {
            cout << "Invalid choice, try again." << endl;
        }
    }

    return 0;
}

// --- Function Definitions ---

// 1. Park a Car (Add to Array)
void parkCar() {
    // First, check if the lot is full (hit the 100 limit)
    if (totalCars >= MAX_CARS) {
        cout << "Sorry, parking is Full!" << endl;
        return;
    }

    string plate;
    cout << "Enter Car License Plate: ";
    cin >> plate;

    // Store the plate in the next available slot
    parkingSlots[totalCars] = plate;
    
    // Increase the counter
    totalCars++; 

    cout << "Car parked successfully!" << endl;
}

// 2. Remove a Car (Delete from Array)
void removeCar() {
    if (totalCars == 0) {
        cout << "Parking lot is empty!" << endl;
        return;
    }

    string plate;
    cout << "Enter License Plate to remove: ";
    cin >> plate;

    int foundIndex = -1; // -1 means not found yet

    // Step 1: Find the car
    for (int i = 0; i < totalCars; i++) {
        if (parkingSlots[i] == plate) {
            foundIndex = i;
            break; // Stop looking, we found it
        }
    }

    // Step 2: If found, calculate bill and remove
    if (foundIndex != -1) {
        int hours;
        cout << "Car found! How many hours parked? ";
        cin >> hours;

        int fee = hours * 50; // Simple calculation (50 per hour)
        cout << "-----------------------" << endl;
        cout << "Total Bill: " << fee << " Rupees" << endl;
        cout << "-----------------------" << endl;

        // LOGIC TO REMOVE CAR:
        // We move the very last car in the list to this empty spot.
        // This is the easiest way to delete from an array!
        parkingSlots[foundIndex] = parkingSlots[totalCars - 1];
        
        // Decrease the total count
        totalCars--; 

        cout << "Car removed and payment collected." << endl;
    } else {
        cout << "Car not found!" << endl;
    }
}

// 3. Show Status (Print Array)
void showStatus() {
    cout << "\n--- Current Cars ---" << endl;
    if (totalCars == 0) {
        cout << "Parking is Empty." << endl;
    } else {
        for (int i = 0; i < totalCars; i++) {
            cout << "Slot " << (i + 1) << ": " << parkingSlots[i] << endl;
        }
    }
}