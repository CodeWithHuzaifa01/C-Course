#include <iostream>
#include <iomanip>
using namespace std;

template <class H>
class Calculator {
private:
    H v1, v2;

public:
    Calculator(H n1, H n2) {
        v1 = n1;
        v2 = n2;
    }

    H add() { return v1 + v2; }
    
    H subtract() { return v1 - v2; }
    
    H multiply() { return v1 * v2; }

    H divide() {
        if (v2 == 0) {
            cout << "Error: div by zero\n";
            return 0; 
        }
        return v1 / v2;
    }

    void displayOutput() {
        cout << fixed << setprecision(4);
        cout << " Outputs" <<endl;
        cout << "Value 1: " << v1 << "\nValue 2: " << v2 <<endl;
        cout << "Sum: " << add() <<endl;
        cout << "Diff: " << subtract() <<endl;
        cout << "Product: " << multiply() <<endl;
        
        cout << "Div: ";
        if (v2 == 0)
            cout << "undefined"<<endl;
        else
            cout << divide() << endl;
    }
};

int main() {
    int selection;

    cout << "Select Data Type:"<<endl;;
    cout << "1. Integer (int)\n2. Decimal (float)\n3. Large Decimal (double)"<<endl;
    cout << "Enter (1-3): ";
    cin >> selection;

    if (selection == 1) {
        int h, m;
        cout << "Enter 1st int: "; cin >> h;
        cout << "Enter 2nd int: "; cin >> m;
        Calculator<int> calc(h, m);
        calc.displayOutput();
    }
    else if (selection == 2) {
        float h, m;
        cout << "Enter 1st float: "; cin >> h;
        cout << "Enter 2nd float: "; cin >> m;
        Calculator<float> calc(h, m);
        calc.displayOutput();
    }
    else if (selection == 3) {
        double h, m;
        cout << "Enter 1st double: "; cin >> h;
        cout << "Enter 2nd double: "; cin >> m;
        Calculator<double> calc(h, m);
        calc.displayOutput();
    }
    else {
        cout << "wrong input"<<endl;
    }

    return 0;
}