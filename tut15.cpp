#include<iostream>
using namespace std;

int main (){
    /* What is pointer? ----> Data type which holds the address of 
    others data types.*/
int a = 3;
int* b=&a;
 
          //  & ----> (Address of) Opreater:
 cout<<"The address of a: "<<b<<endl;
 cout<<"The address of a: "<<&a<<endl;

          //  * ----> (value at) Dereferance Opreater:
 cout<<"The value at a point is: "<<*b<<endl;
    // Double assign pointers (Give one data to another one):
 int**h = &b;
 cout<<"The address of b: "<<&b<<endl;
 cout<<"The address of b: "<<h<<endl;

 cout<<"The value at b point is: "<<**h<<endl;
    return 0;

    // Pointer to Pointer concept can't clear : epi#12.
}
