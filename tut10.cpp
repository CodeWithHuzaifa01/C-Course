#include<iostream>
using namespace std;

int main (){
    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
    */

    // 1) Syntax for for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }
 
    //Printing 1 to 100 using for lopp
 for (int i = 0; i < 100; i++)
 {
    cout<<i<<endl;
 }

   /* 2) While loop in C++*/
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }

      //Printing 1 to 40 using while lopp
   int i =1;
  while (i<=40)
  {
    /* code */
    cout<<i<<endl;
    i++;
  }

  
    /* 3) do While loop in C++*/
        // Syntax:
        // do
        // {
        //     C++ statements;
        // }while(condition);
      int i = 1;  
   do
   {
    /* code */
    cout<<i<<endl;
    i++;
   } while (i<=40);
   
    return 0;
} 

 
