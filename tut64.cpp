#include<iostream>
using namespace std;


    int product(int a, int b){
        static int c = 0;
        c = c +1;
        return a * b + c;
    }
int main(){
    int num1 , num2;
    cout<<"Enter the value of Num1 and Num2 "<<endl;
    cin>>num1>>num2;
    cout<<"The Product of Num1 and Num2 is:- "<<product(num1 , num2)<<endl;
    cout<<"The Product of Num1 and Num2 is:- "<<product(num1 , num2)<<endl;
    cout<<"The Product of Num1 and Num2 is:- "<<product(num1 , num2)<<endl;
    cout<<"The Product of Num1 and Num2 is:- "<<product(num1 , num2)<<endl;
return 0;
}