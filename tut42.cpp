#include<iostream>
using namespace std;

  
    void swap (int &a , int &b){
    int  temp = a;
    a = b;
    b = temp;
    } 

    void swap (int *a , int *b){
    int  temp = *a;
    *a = *b;
    *b = temp;
    } 

    int main(){

    int q = 5 , r = 7;
    cout<<"The value of q is: "<<q<<"."<< "The value of r is: "<<r<<endl;  
    swap (q,r);
    cout<<"After swaping The value of q is: "<<q<<"."<<" After swaping The value of r is: "<<r<<endl;     
    cout<<"The value of q is: "<<q<<"."<< "The value of r is: "<<r<<endl;  
    swap (&q,&r);
    cout<<"After swaping The value of q is: "<<q<<"."<<" After swaping The value of r is: "<<r<<endl;     
    cout<<"The value of q is: "<<q<<"."<< "The value of r is: "<<r<<endl;  
    swap (&q,&r);
    cout<<"After swaping The value of q is: "<<q<<"."<<" After swaping The value of r is: "<<r<<endl;     

return 0;
}