#include <iostream>
using namespace std;
// int count = 0;
class num
{
    static int count;

public:
    num()
    {
        count++;
        cout << "This is the Time when the Constructer is run for the Object Number" << count << endl;
    }
    ~num()
    {
        cout << "This is the Time when the Destructer is run for the Object Number" << count << endl;
        count--;
    }
};
int num::count = 0;
int main()
{
    cout << "We are inside in our main Function. " << endl;
    cout << "Creating First object n1." << endl;
    num n1;
    {
        cout << "Entering to this block. " << endl;
        cout << "Now we creating 2 more Object." << endl;
        num n2, n3;
        cout << "Exiting From this block." << endl;
    }
    cout << "Back to main." << endl;
    return 0;
}