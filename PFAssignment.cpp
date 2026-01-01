                                        // Programm executed By Muhammad Ahmad
#include <iostream>
using namespace std;

int main()
{
    // Variables to store user inputs
    int category, feeStatus, serviceChoice;
    float marks;

    // Task 1: Student Category Selection using switch
    cout << "Select Category (1: Undergraduate, 2: Graduate, 3: PhD): ";
    cin >> category;

    switch (category)
    {
    case 1:
        cout << "Welcome Undergraduate Student!" << endl;
        break;
    case 2:
        cout << "Welcome Graduate Student!" << endl;
        break;
    case 3:
        cout << "Welcome PhD Student!" << endl;
        break;
    default:
        cout << "Invalid Category Selected!" << endl;
        return 0; // Stop program if input is wrong
    }

    // Task 2: Fee Status Verification using if-else
    cout << "\nIs Fee Paid? (1 for Yes, 0 for No): ";
    cin >> feeStatus;

    if (feeStatus == 1)
    {
        // Allow access if fee is paid
        cout << "Access Granted. Please proceed." << endl;

        // Ask for marks
        cout << "\nEnter your Marks: ";
        cin >> marks;

        // Task 3: Scholarship Evaluation using else-if chain
        if (marks >= 85)
        {
            cout << "Result: Full Scholarship Awarded." << endl;
        }
        else if (marks >= 70)
        {
            cout << "Result: Partial Scholarship Awarded." << endl;
        }
        else if (marks >= 50)
        {
            cout << "Result: No Scholarship." << endl;
        }
        else
        {
            cout << "Result: Not Eligible for Scholarship." << endl;
        }

        // Task 4: Academic Standing using Nested if-else
        // Check if marks are low to give specific warnings
        if (marks < 50)
        {
            if (marks >= 40)
            {
                cout << "Warning: Your marks are low (40-49)." << endl;
            }
            else
            {
                cout << "Alert: You are on Academic Probation (< 40)." << endl;
            }
        }

        // Task 5: Student Service Menu using switch
        cout << "\n--- Student Service Menu ---" << endl;
        cout << "1. View Timetable\n2. View Fee Status\n3. Apply for Scholarship\n4. Exit" << endl;
        cout << "Select a Service: ";
        cin >> serviceChoice;

        switch (serviceChoice)
        {
        case 1:
            cout << "Displaying Timetable..." << endl;
            break;
        case 2:
            cout << "Your Fee Status is: PAID." << endl;
            break;
        case 3:
            cout << "Redirecting to Scholarship Application..." << endl;
            break;
        case 4:
            cout << "Exiting System. Good luck!" << endl;
            break;
        default:
            cout << "Invalid Service Option." << endl;
        }
    }
    else
    {
        // Task 2 part 2: Restrict access if fee not paid
        cout << "Access Denied. Please pay your fees first." << endl;
    }

    return 0;
}