#include <iostream>
using namespace std;
class Simple
{
    /*The constructer can Take defualt Arguments Also But we dont use it with many Function i talk
    about Constructer overloading because when we take defult Arguments So, Comppiler will be confuse
    so this is possible in Only Constructer.*/
    int data1;
    int data2;
    int data3;

public:
    Simple(int r = 10, int s = 20, int t = 30)
    {
        data1 = r;
        data2 = s;
        data3 = t;
    }
    void displayData();
};
void Simple::displayData()
{
    cout << "The Value of Data1 , Data2 and Data3 is:-" << data1 << ", " << data2 << " and " << data3 << "." << endl;
}
int main()
{
    Simple s1; /*(23, 40, 56);*/
    s1.displayData();

    return 0;
}