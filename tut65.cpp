#include <iostream>
using namespace std;
class ShopItem
{
    int price;
    static int totleItem;

public:
    void setData(void)
    {
        cout << "What is the price of the items:- " << endl;
        cin >> price;
    }
    void displayData(void)
    {
        cout << "The price of the item is:- " << price << "$." << endl;
        cout << "This item totle stock availible is:- " << totleItem++ << "." << endl;
    }
};

int ShopItem ::totleItem = 1;
int main()
{
    ShopItem lays, slanty, choclate;
    lays.setData();
    lays.displayData();
    slanty.setData();
    slanty.displayData();
    choclate.setData();
    choclate.displayData();
    return 0;
}