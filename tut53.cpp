#include <iostream>
using namespace std;

class Shop
{

    int itemId[57];
    int itemPrice[57];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{

    cout << "Enter Id of your Item:-" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of Your item:-" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{

    for (int i = 0; i < counter; i++)
    {
        cout << "The price of Item with Id " << itemId[i] << " is:- " << itemPrice[i] <<"Rs."<< endl;
    }
}

int main()
{

    Shop Dokaan;
    Dokaan.initcounter();
    Dokaan.setPrice();
    Dokaan.setPrice();
    Dokaan.setPrice();
    Dokaan.setPrice();
    Dokaan.setPrice();
    Dokaan.displayPrice();
    return 0;
}

// #include <iostream>
// using namespace std;

// class Shop
// {

//     int ItemId[25];
//     int ItemPrice[25];
//     int counter;

// public:
//     void initcounter(void) { counter = 0; }
//     void setPrice(void);
//     void displayPrice(void);
// };

// void Shop ::setPrice(void)
// {
//     cout << "Enter the ID of your Item:- " << counter + 1 << endl;
//     cin >> ItemId[counter];

//     cout << "Enter the Price of your ID:- " << endl;
//     cin >> ItemPrice[counter];
//     counter++;
// }

// void Shop::displayPrice(void)
// {
//     for (int i = 0; i < counter; i++)
//     {
//         cout << "The price of Item with Id " << ItemId[i] << " is:- " << ItemPrice[i] << "Rs." << endl;
//     }
// }

// int main()
// {
//     Shop HMIABJ;
//     HMIABJ.initcounter();
//     HMIABJ.setPrice();
//     HMIABJ.setPrice();
//     HMIABJ.setPrice();
//     HMIABJ.setPrice();
//     HMIABJ.setPrice();
//     HMIABJ.displayPrice();

//     return 0;
// }