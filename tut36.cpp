#include<iostream>
using namespace std;

int main(){

    // float a = 20.3f;
    // long double b = 10.5l;
    // cout<<"The values is: "<<sizeof(20.3)<<endl;
    // cout<<"The values is: "<<sizeof(20.3f)<<endl;
    // cout<<"The values is: "<<sizeof(20.3F)<<endl;
    // cout<<"The values is: "<<sizeof(10.5l)<<endl;
    // cout<<"The values is: "<<sizeof(10.5L)<<endl;

    // int khan = 20;
    // int & king = khan;
    // cout<<"This is Khan: "<<khan<<endl;
    // cout<<"This is king: "<<king<<endl;

int x = 18;
double y = 18.88;
// cout<<"The value of y is. "<<(double)y<<endl;
// cout<<"The value of x is. "<<(int)y<<endl;
// int h = float (y);

 cout<<"The expression is. "<<x + y<<endl;
 cout<<"The expression is. "<<x + (int)y<<endl;
 cout<<"The expression is. "<<x + int(y)<<endl;

    return 0;
}