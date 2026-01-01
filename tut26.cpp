// The Example is written by Huxaifa Tahir*
#include <iostream>
using namespace std;

class Animal
{
private:
    int ear, hair, eye;

public:
    string name, color;
    void setData(int ear1, int hair1, int eye1);
    void getData()
    {
        cout << "The size of ear is: " << ear << "cm Long." << endl;
        cout << "The hair is: " << hair << "Infinty." << endl;
        cout << "The size of eye is: " << eye << "cm Wide." << endl;
        cout << "The name is: " << name << endl;
        cout << "The color is: " << color << endl;
    }
};

void Animal ::setData(int ear1, int hair1, int eye1)
{
    ear = ear1;
    hair = hair1;
    eye = eye1;
}
int main()
{
    Animal Dog;
    Dog.color = "Black";
    Dog.name = "Chris";
    Dog.setData(3, 0, 5);
    Dog.getData();
    return 0;
}