#include<iostream>
using namespace std;

int main(){
    int marks[6]={90,87,54,87,33};
    int *h = marks;
    // for (int i = 0; i <= 4; i++)
    // {
    //     cout<<marks[i]<<endl;
    // }

    // int a=0;
    // while ( a<=4){
    //     cout<<marks<<endl;
    //     // cout<<a<<":"<<marks[a]<<endl;
    //     a++;
    // }
    cout<<*h<<endl;
    cout<<*(h+1)<<endl;
    cout<<*(h+2)<<endl;
    cout<<*(h+3)<<endl;
    cout<<*(h+4)<<endl;
    
    
    return 0;
}