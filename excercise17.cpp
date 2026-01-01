#include <iostream>
using namespace std;
class box
{
public:
    int goldCoins = 100;
    box() {}
};

class OpenBox : public box
{
    // public:
};

class Safe : box
{
};
int main()
{
    OpenBox myOpenBox;
    cout << myOpenBox.goldCoins;
    return 0;
}