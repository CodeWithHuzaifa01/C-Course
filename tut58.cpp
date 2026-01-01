#include <iostream>
using namespace std;

class Employyee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Whats the employyee ID?" << endl;
        cin >> id;
        count++;
    };
    void DisplayData(void)
    {
        cout << "The ID of this Employyee is:-" << id << " and This is employyee Number " << count << endl;
    };
};

int Employyee::count;
int main()
{

    Employyee Harry, khan, king;
    Harry.setData();
    Harry.DisplayData();

    khan.setData();
    khan.DisplayData();

    king.setData();
    king.DisplayData();
    return 0;
}