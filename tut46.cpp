#include<iostream>
using namespace std;

    // Overloading Examples
    string ahmad(string a , string b){
        cout<<"This is string: "<<endl;
        return a + b;
    }

   int ahmad(int a , int b){
        cout<<"This is Interger: "<<endl;
        return a + b;
   }


   long double ahmad(float a , double b){
        cout<<"This is the 1st long double: "<<endl;
        return a + b;
   }

int main(){

cout<<"Hi Ahmad "<<ahmad("Good morning"," How are you")<<endl;
cout<<"The sum of integer 7 and 6 is: "<<ahmad(7 , 6)<<endl;
cout<<"The sum of long double 3.456 + 4.321 is:"<<ahmad(3.456,4.321)<<endl;
return 0;
}