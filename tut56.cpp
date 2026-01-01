#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age:-" << endl;
    cin >> age;
    if (age >= 18)
    {

        cout << " this is adult" << endl;
    }
    else if( age>=50 && 100){
        cout<<"Your age is complete now you goto graveyard:-"<<endl;
    }
    else
    {
        cout << "This is child:" << endl;
    }

    return 0;
}