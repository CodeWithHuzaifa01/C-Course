/*The program executed by huzaifa tahir*/
// Q3 solve:
#include<iostream>
using namespace std;

int main (){
     int a , b , c , d ,max;
    cout<<"Following are the values "<<endl;
    cin>>a>>b>>c>>d;

    max=(a>b)? a : b;
    max=(max>c) ? max : c;
    max=(max>d) ? max : d;
    cout<<"The maximum num is: "<<max<<endl;
  return 0;
}