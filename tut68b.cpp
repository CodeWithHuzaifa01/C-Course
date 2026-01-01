#include <iostream>
using namespace std;
class c2;

class c1
{
    friend void exchange(c1 &, c2 &);
    int val1;

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display()
    {
        cout << val1 << "." << endl;
    }
};

class c2
{
    friend void exchange(c1 &, c2 &);
    int val2;

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display()
    {
        cout << val2 << "." << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(50);
    oc2.indata(100);
    exchange(oc1, oc2);

    cout << "The value of C1 after exching Become:-";
    oc1.display();
    cout << "The value of C2 after exching Become:-";
    oc2.display();
    return 0;
}