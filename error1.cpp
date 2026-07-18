#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "I am a Class A" << endl;
    }
};

class B
{
public:
    void show()
    {
        cout << "I am a class B" << endl;
    }
};

class c : public A, public B
{
public:
    void show()
    {
        cout << "I am derived from class A and B" << endl;
    }
    c()
    {
        cout << "I am a C child class" << endl;
    }
};

int main()
{
    c obj;
    obj.A::show();
    obj.B::show();
    obj.show();
    return 0;
}