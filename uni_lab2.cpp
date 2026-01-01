#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int product(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    if (b == 0)
    {
        cout << "Error! False division" << endl;
        return 0;
    }
    return a / b;
}


int modulo(int a, int b)
{
    if (b == 0)
    {
        cout << "Error! Cannot divide by zero" << endl;
        return 0;
    }
    return a % b;
}

int main()
{
    int num1, num2;
    char op;

    cout << "Enter the 1st digit:-" << endl;
    cin >> num1;


    cout << "Enter the Arithmetic Operator {+, -, *, /, %}:-" << endl;
    cin >> op;

    cout << "Enter the 2nd digit:-" << endl;
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << "This is the Sum: " << sum(num1, num2);
        break;

    case '-':
        cout << "This is the minus: " << subtract(num1, num2);
        break;

    case '*':
        cout << "This is the Product: " << product(num1, num2);
        break;

    case '/':
        cout << "This is the Division: " << division(num1, num2);
        break;

    // 2. Added Case for Modulus
    case '%':
        cout << "This is the Remainder: " << modulo(num1, num2);
        break;

    default:
        cout << "Error! Invalid Operator selected.";
        break;
    }

    return 0;
}