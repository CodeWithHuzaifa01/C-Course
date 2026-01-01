#include<iostream>
using namespace std;
    class Complex{
        int a,  b;
        public:
        Complex(int x , int y){
            a = x;
            b = y;
        }
        Complex(int x){
            a = x;
            b = 0;
        }

        Complex(){
            a = 0;
            b = 0;
        }

          void DisplayData(){
            cout << "Your number is " << a << " + " << b << "i." << endl;
        }

    };
int main(){
Complex c1(50 , 85);
c1.DisplayData();

Complex c2(43);
c2.DisplayData();

Complex c3;
c3.DisplayData();
return 0;
}