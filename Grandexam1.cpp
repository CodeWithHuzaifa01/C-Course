#include <iostream>
using namespace std;
class Patient
{
    int patientId;
    int severity;
    static int totalPatients;
    friend void docterCheck(Patient sv);

public:
    void setDetail(int id, int sv)
    {
        patientId = id;
        severity = sv;
        totalPatients++;
    }
    static void displaytotlepatient()
    {
        cout << "The TotlePatient count is:-" << totalPatients << endl;
    }
};

int Patient::totalPatients = 0;
void docterCheck(Patient sv)
{
    if (sv.severity >= 8)
    {
        cout << "Patient is CRITICAL! Admit to ICU. " << endl;
    }
    else
    {
        cout << "Patient [ID] is Stable. General Ward." << endl;
    }
}

int main()
{
    Patient ward[3];
    int userInput;
    int userInput2;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the Id for the patient and severity:-" << i + 1 << endl;
        cin >> userInput;
        cin>>userInput2;
        ward[i].setDetail(userInput, userInput2);
        docterCheck(ward[i]);
    }
    Patient ::displaytotlepatient();
    return 0;
}