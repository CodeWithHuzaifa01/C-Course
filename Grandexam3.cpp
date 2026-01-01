#include <iostream>
using namespace std;
class Account
{
    int accId;
    int balance;
    static int totleVault;
    friend void checkRich(Account a);

public:
    void deposite(int id, int amount)
    {
        accId = id;
        balance = amount;
        totleVault = totleVault + amount;
    };
    static void showtotleVault()
    {
        cout << "The TotleVault is:-" << totleVault << "." << endl;
    }
};

int Account::totleVault;

void checkRich(Account a)
{
    if (a.balance > 50000)
    {
        cout << "Account Id is:-" << a.accId << " Golden Costomer." << endl;
    }
    else
    {
        cout << "Account Id is:-" << a.accId << " Standard Costomer." << endl;
    }
}
int main()
{

    Account user[6];
    int userInput;
    int userInput2;
    int i = 0;
    do
    {
        cout << "Enter the ID and Desposit? " << i + 1 << "." << endl;
        cin >> userInput;
        cin >> userInput2;
        user[i].deposite(userInput, userInput2);
        checkRich(user[i]);
        i++;
    } while (i < 6);
    Account ::showtotleVault();
    return 0;
}