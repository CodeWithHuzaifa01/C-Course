#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
class Calculator {
private:
    T v1, v2;

public:
    Calculator(T n1, T n2) {
        v1 = n1;
        v2 = n2;
    }

    T add() { return v1 + v2; }
    
    T subtract() { return v1 - v2; }
    
    T multiply() { return v1 * v2; }

    T divide() {
        if (v2 == 0) {
            cout << "Error: div by zero\n";
            return 0; 
        }
        return v1 / v2;
    }

    void displayResult() {
        cout << fixed << setprecision(2);
        cout << "\n--- Results ---\n";
        cout << "Value 1: " << v1 << "\nValue 2: " << v2 << "\n";
        cout << "Sum: " << add() << "\n";
        cout << "Diff: " << subtract() << "\n";
        cout << "Product: " << multiply() << "\n";
        
        cout << "Div: ";
        if (v2 == 0)
            cout << "undefined\n";
        else
            cout << divide() << "\n";
        cout << "---------------\n";
    }
};

int main() {
    int opt;

    cout << "Select Data Type:\n";
    cout << "1. Integer (int)\n2. Decimal (float)\n3. Large Decimal (double)\n";
    cout << "Enter (1-3): ";
    cin >> opt;

    if (opt == 1) {
        int x, y;
        cout << "Enter 1st int: "; cin >> x;
        cout << "Enter 2nd int: "; cin >> y;
        Calculator<int> calc(x, y);
        calc.displayResult();
    }
    else if (opt == 2) {
        float x, y;
        cout << "Enter 1st float: "; cin >> x;
        cout << "Enter 2nd float: "; cin >> y;
        Calculator<float> calc(x, y);
        calc.displayResult();
    }
    else if (opt == 3) {
        double x, y;
        cout << "Enter 1st double: "; cin >> x;
        cout << "Enter 2nd double: "; cin >> y;
        Calculator<double> calc(x, y);
        calc.displayResult();
    }
    else {
        cout << "wrong input\n";
    }

    return 0;
}