
#include<iostream>
using namespace std;

 int sum( int , int );
 void g(void);
 //{
//     int c = a + b;
//      return c;
// }

// void g(){
//   cout<<"Enter the 1st number: "<<endl;
// }

int main(){
 
    int num1, num2;
    // cout<<"The value of num1 is: "<<endl;
    g();
    cin>>num1;
    cout<<"The value of num2 is: "<<endl;
    cin>>num2;
    cout<<"The sum of num1 and num2 is: "<<sum(num1,num2)<<endl;

return 0;
}
int sum ( int a, int b){
    int c = a + b;
     return c;
}

void g(){
  cout<<"Enter the 1st number: "<<endl;
}