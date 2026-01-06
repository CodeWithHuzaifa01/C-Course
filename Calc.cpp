#include<iostream>
using namespace std;

int main(){
    int a , b;
    char Op;
    cout<<"Enter your 1st Digit:- "<<endl;
    cin>>a;
    cout<<"Enter Your Opreation:- "<<endl;
    cin>>Op;
    cout<<"Enter your 2st Digit:- "<<endl;
    cin>>b;
    switch(Op){
        case '+':{
            cout<<"Result:- a + b is:- "<<(a + b);
            break;
        }
        case '-':{
            cout<<"Result:- a - b is:- "<<(a - b);
            break;
        }
        case '*':{
            cout<<"Result:- a * b is:- "<<(a * b);
            break;
        }
        case '/':{
            cout<<"Result:- a / b is:- "<<(a / b);
            break;
        }
    }
    
    
return 0;
}