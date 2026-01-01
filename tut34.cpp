#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int const a = 5; 
    // char const b = 'G';
    // cout<<"The value of a is "<<a<<setw(3)<<b<<endl;

    // // b = '8';
    // // // a = 10;
    // cout<<"The value of a is "<<b<<endl;
    int age;
    cout<<"Tell me your age "<<endl;
    cin>>age;
    // if ((age<18) && (age>0))
    // {
    //    cout<<"you are baby now."<<endl;
    // }
    
    // else if (age==18)
    // {
    //    cout<<"You are now adult"<<endl;
    // }
    
    // else if (age<1)
    // {
    //     cout<<"you are not born"<<endl;
    // }
    

    // else
    // {
    //     cout<<"You are become meture"<<endl;
    // }
    
    switch (age)
    {
    case 18:
     cout<<"i am now Adult"<<endl;
        break;
    
    case 25:
        cout<<"i am now younger"<<endl;
        break;
    
    case 60:
        cout<<"I am now older"<<endl;
        break;
    
    default:
        cout<<"I am a man"<<endl;
        break;
    }
    return 0;
}