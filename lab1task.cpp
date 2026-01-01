#include<iostream>
using namespace std;

int main(){
 int num1 , sum = 0;
 cout<<"Enter the number:- "<<endl;
 cin>>num1;

    // for (int i = 1; i <= num1; i++)
    // {
    //     sum = sum + i;
    // }
    // cout<<"The totle sum of all values is:- "<<sum<<endl;

    int i = 1;
    while (i<=num1)
    {
        sum= sum + i;
         i++;
    }
         cout<<"The totle sum of all values is:- "<<sum<<endl;

    // int i = 1;
    // do
    // {
    //      sum= sum + i;
    //      i++; 
    // } while (i<=num1);
    //      cout<<"The total sum of all values is:- "<<sum<<endl;
    

    
return 0;
}