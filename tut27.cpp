              /*   The programm is executed by Huxaifa tahir   */ 
#include<iostream>
using namespace std;

int sum(int a , int b);
int main (){
    int num1,  num2;
    cout<<"Enter the value of num1: "<<endl;
    cin>>num1;

    cout<<"Enter the value of num2: "<<endl;
    cin>>num2;

    cout<<"\nThe sum of these two nums is: "<<sum(num1,num2);
    return 0;
}
int sum(int a , int b){
    int c = a + b;
    return c;
}

