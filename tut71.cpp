#include<iostream>
using namespace std;
    class Complex{
        int a , b;
        public: 
        Complex(){
            a = 0;
            b = 0;
        }

        Complex(int h , int m){
            a = h;
            b = m;
        }

        Complex(int m){
            a = 5;
            b = m;
        }
        void DisplayData(){
            cout << "Your number is " << a << " + " << b << "i." << endl;
        }


    };
int main(){
Complex p1;
p1.DisplayData();
 
Complex p3(78 , 18);
p3.DisplayData();

Complex p2(50);
p2.DisplayData();

return 0;
}