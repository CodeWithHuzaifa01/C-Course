/*   The programm is executed by Huxaifa tahir   */
#include <iostream>
using namespace std;

class Employye
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // Declaration:
    void getData()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    }
};

void Employye ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employye Ahmad;
    Ahmad.d = 17;
    Ahmad.e = 18;
    Ahmad.setData(14, 15, 16);
    Ahmad.getData();
    return 0;
}