#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
                    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "This is copy construter Runs!!!" << endl;
        a = obj.a;
    }
    void Display()
    {
        cout << "The number for this object is " << a << "." << endl;
    }
};
int main()
{
    Number x, y, z(45) , zing(40) , zi;
    x.Display();            //-----> 0     Defualt constructer
    y.Display();            //-----> 0     Defualt constructer
    z.Display();            //-----> 45    Parameterized Constructor
    zing.Display();         //-----> 40    Parameterized Constructor
    zi = zing;                                                      // Copy constructor not called
    zi.Display();           //-----> 40    Assignment Operator.
    Number z1(y);                                                   // Copy constructor invoked
    z1.Display();           //-----> 0     copy constructer
    Number z2 = z;                                                  // Copy constructor invoked
    z2.Display();           //-----> 45    copy constructer



         // z1 should exactly resemble z  or x or y (Khabare mtlb da shu che da z1 mukammal da d z , x , y pashan jorhaw laka copy). so its called Copy constructer!

    return 0;
}