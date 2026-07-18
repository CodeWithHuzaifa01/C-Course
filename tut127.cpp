#include<iostream>
using namespace std;
    // int fac(int n){
    //     if(n <= 1){
    //         return 1;
    //     }
    //     return n * fac(n-1);
    // }
    int fab(int n){
        if(n < 2){
            return 1;
        }
        return fab(n-2) + fab(n -1);
    }
int main(){
int a ; 
cout<<"\nEnter your number.";
cin>>a;
cout<<"Your given number "<<a<<" Fabonacchi is:- "<<fab(a)<<endl;
return 0;
}
