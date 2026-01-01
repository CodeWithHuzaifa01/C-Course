#include<iostream>
using namespace std;

int main(){

    int n=6;
    int factorial= 1;
    // int i=1;
    // while (i <= n )
    // {
    //     factorial = factorial * i;
    //     i++;
    // }

    // do{
    //     factorial = factorial * i;
    //     i++;
    // }while (i <= n);

    

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i; 
    }
    cout<<"The factorial is: "<<factorial<<"!"<<endl;
return 0;
}