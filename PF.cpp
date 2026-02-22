#include <iostream>
using namespace std;
int sum(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n + sum(n - 1);
}

int main()
{
    int a;
    cout << "Enter a number: " << endl;
    cin >> a;
    cout << "The sum of your given number " << a << " is:-" << sum(a) << endl;
    return 0;
}