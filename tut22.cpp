              /*   The programm is executed by Huxaifa tahir   */ 
#include<iostream>
using namespace std;

inline int product (int a , int b){
    // Not recommended to use below lines with inline function:
    // static int c = 0; //This execute only once(Da line ba yaw xl excute k ge)
    // c = c + 1; //Next time this function is run, the value of c is be retained:
    return a*b;
}
 
 float moneyRecived(int currentMoney , float factor=1.04){
    return currentMoney * factor;
 }
int main (){
    int a , b ;
    // cout<<"The value of a and b is: "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is: "<<product(a , b)<<endl;
    int money=10000;
    cout<<"If you have: "<<money<<" Rs in your bank account, you will recive: "<<moneyRecived(money)<<" Rs after 1 year. "<<endl;
    cout<<"If you have: "<<money<<" Rs in your bank account, you will recive: "<<moneyRecived(money, 1.4)<<" Rs after 1 year. "<<endl;
    return 0;
}