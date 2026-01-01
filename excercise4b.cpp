/*   The programm is executed by Huxaifa tahir   */
// Challenge Gemini of 26 epi.
#include <iostream>
using namespace std;
class Khan;
class Ali
{
    int money = 50;
    friend void totleMoney(Ali a, Khan k);
};
class Khan
{
    int money = 100;
    friend void totleMoney(Ali a, Khan k);
};

void totleMoney(Ali a, Khan k)
{
    int sum = a.money + k.money;
    cout << "The money they Both taken is:- " << sum << "." << endl;
}
int main()
{
    Ali AliMoney;
    Khan khanMoney;
    totleMoney(AliMoney, khanMoney);
    return 0;
}