/*   The programm is executed by Huxaifa tahir   */
// Challenge Gemini of 26 epi.

#include <iostream>
using namespace std;
class Citizen
{
    int inCome;

public:
    friend void CalculateTex(Citizen c);
    void setIncome(int m)
    {
        inCome = m;
    };
};
 void CalculateTex(Citizen c)
    {
        if (c.inCome > 200000)
        {
            cout << "Tax required" << endl;
        }
        else
        {
            cout << "No tax!" << endl;
        }
    }

int main()
{
    Citizen Khan, Ahmad;
    Khan.setIncome(560000);
    CalculateTex(Khan);
    Ahmad.setIncome(995);
    CalculateTex(Ahmad);
    return 0;
}