             /*   The programm is executed by Huxaifa tahir   */ 
#include<iostream>
using namespace std;

// int sum (int a , int b){
//     int c = a + b ;
//     return c;
// }

    //Da swap ba values na change kai:
// void swap(int a , int b){
//     int temp = a;
//     a = b;
//     b = temp;
// } 

    //Call by reference using pointers da swap ba values change kai:
void swappointer(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

    //Call by reference using by using C++ reference variables, da yaw bl method d:
// void swapReferenceVar(int &a , int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }
int main (){
    int a = 10 , b = 8;
    // cout<<"The sum of 10 and 10 is: "<<sum(10,8);
    cout<<"The value of a is: "<<a<<" and The value of b is: "<<b<<endl;
    // swap(a , b);
    cout<<"The value of a is: "<<a<<" and The value of b is: "<<b<<endl;
    swappointer(&a , &b);
    // cout<<"The value of a is: "<<a<<" and The value of b is: "<<b<<endl;
    // swapReferenceVar(a , b);
    // cout<<"The value of a is: "<<a<<" and The value of b is: "<<b<<endl;
    // return 0;
}   
