#include <iostream>
using namespace std;
class CentralBank
{
protected:
    int BankCode;

public:
    void setCode()
    {
        BankCode = 9900;
    }
    // void getHint()
    // {
    //     cout << "This is The secure Server ID." << endl;
    // }
};

class User : public CentralBank
{
protected:
    int Balance;

public:
    void addMoney(int m)
    {
        Balance = m;
    }
};

class Transaction : public User
{
public:
    void payBill(int amount)
    {
        if (Balance >= amount)
        {
            Balance = Balance - amount;
            // getHint();
            cout << "Payment Successful via Bank Code:-" << BankCode << ". Remaining Balance:" << Balance << "." << endl;
        }
        else
        {
            // getHint();
            cout << "Transaction Failed. Low Balance in Bank Code:- " << BankCode << endl;
        }
    };
};
int main()
{
    Transaction T1;
    T1.setCode();
    T1.addMoney(75000);
    T1.payBill(10000);
    return 0;
}
