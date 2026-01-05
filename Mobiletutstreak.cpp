#include <iostream>
using namespace std;

int main() {
    // Simple program for GitHub Streak
    // Uploaded by CodeWithHuzaifa01
    
    int number;
    
    cout << "Enter a positive integer: ";
    cin >> number;

    cout << "-------------------------" << endl;
    cout << " Multiplication Table of " << number << endl;
    cout << "-------------------------" << endl;

    for (int i = 1; i <= 10; ++i) {
        cout << number << " * " << i << " = " << (number * i) << endl;
    }

    return 0;
}
