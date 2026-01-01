#include <iostream>
using namespace std;
class Guest
{
    string name;
    static int totalGuests;

public:
    Guest(string n)
    {
        name = n;
        totalGuests++;
        cout << name << " Entered the party. Total Guests:" << totalGuests << endl;
    }
    ~Guest()
    {
        totalGuests--;
        cout << name << " Left the party. Total Guests:" << totalGuests << endl;
    }
};
int Guest::totalGuests = 0;
int main()
{
    Guest g1("Host Huzaifa");
    {
        Guest g2("Friend Ali");
        Guest g3("Friend Bilal");
    }
    Guest gc("Cleaner");
    return 0;
}