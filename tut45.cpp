#include<iostream>
using namespace std;

    string sum(string a, string b){
        cout<<"This is string output: "<<endl;
        return a+b;
    }
    
    int sum(int a, int b){
        cout<<"This is int1 output: "<<endl;
        return a+b;
    }

    long double sum(double a, float b){
        cout<<"This is int2 output: "<<endl;
        return a+b;
    }


int main(){
    cout<<"The 1st string added: "<<sum("Hello ", "How are you.")<<endl;
    cout<<"The sum of 3 and 5 is: "<<sum(3 ,5)<<endl;
    cout<<"The sum of 3.13 and 3.19 is:  "<<sum(3.13 , 3.19)<<endl;
return 0;
}