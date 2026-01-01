
       //This is another example of Function overloading 
#include<iostream>
using namespace std;

        int product(int a , int b){
            cout<<"Product 1"<<endl;
            return a*b;
        };


        int product(double a , int b){
            cout<<"Product 2"<<endl;
            return a*b;
        };
        

int main(){

    cout<<"The product of 5 , 5 is: "<<product(5,5)<<endl;
    cout<<"The product of 5.5,5 is: "<<product(5.5,5)<<endl;
return 0;
}