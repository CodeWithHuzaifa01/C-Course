#include<iostream>
using namespace std;

int main(){
int marks[]={55,90,76,34};
// cout<<"The value of "<<marks[0]<<endl;
// cout<<"The value of "<<marks[1]<<endl;
// cout<<"The value of "<<marks[2]<<endl;
// cout<<"The value of "<<marks[3]<<endl;


// for (int q = 0; q < 4; q++)
// { 
//   cout<<"The value at "<<q<<" is "<<marks[q]<<endl;
// }

    // int s = 0;
    // while (s < 4)
    // {
    //   cout<<"The value at "<<s<<" is "<<marks[s]<<endl;  
    //   s++; 
    // }
    

    int y = 0;
    do{
        cout<<"The value at "<<y<<" is "<<marks[y]<<endl; 
        y++;
    }while(y<4);

return 0; 
}