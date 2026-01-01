#include <iostream>
using namespace std;

class ATM
{
    long balance;
    

public:
    ATM();
};

ATM::ATM()
{
    balance = 5000;
    cout << "Welcome to UBL! Your card is Accepted." << endl;
};
int main()
{
    ATM UBL;
    return 0;
}