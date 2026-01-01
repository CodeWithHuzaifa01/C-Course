#include<iostream>
using namespace std;

    // struct waiter
    // {
    //     int age;
    //     float salary;
    //     long double timing;
    //     char favcolor;
    // };

     union money
     {
        int pkr;
        float sterling;
        double euro;
        char st;
        char eu;
     };
     
int main(){
    // struct waiter ali;
    // ali.age=18;
    // ali.salary=1000.50;
    // ali.timing= 8.00,1.00;
    // ali.favcolor='B';
    // cout<<"The ali age is :"<<ali.age<<endl;
    // cout<<"The ali salary is :"<<ali.salary<<endl;
    // cout<<"The ali timimg is :"<<ali.timing<<endl;
    // cout<<"The ali favcolor is :blue "<<ali.favcolor<<endl;


    // union money currency;
    // currency.pkr = 300;
    // currency.euro=10;
    // currency.sterling=5;
    // currency.eu='$';
    // currency.st='*';
    // cout<<" the euro to pkr is: "<<currency.euro<<endl;
    // cout<<" the euro to pkr is: "<<currency.sterling<<endl;
    
    enum weeks{
        mon, tue, wed, thu, fri, sat, sun
    };
    weeks w1=mon;
    weeks w7=sun;

    cout<<"There are 7 days in a week"<<" 1st one is Monday: "<<w1<<endl;
    cout<<"There are 7 days in a week"<<" last one is Sunday: "<<w7<<endl;










return 0;
}