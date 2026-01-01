#include <iostream>
using namespace std;
class BankDeposit
{
    int principle;
    int years;
    float intrestRate;
    float returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principle = p;
    years = y;
    intrestRate = r;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principle = p;
    years = y;
    intrestRate = float(r) / 100;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}

void BankDeposit::show()
{
    cout
        << "principle Amount is " << principle
        << ". Return values After " << years
        << " Years is:- " << returnValue << "/-" << endl;
};
int main()
{
    BankDeposit bd1, bd2;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p , y and r?" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p , y and R?" << endl;
    cin >> p >> y >> R;
    bd1 = BankDeposit(p, y, R);
    bd1.show();

    cout << "Enter the value of p , y and R?" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}