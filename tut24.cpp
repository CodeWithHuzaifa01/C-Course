              /*   The programm is executed by Huxaifa tahir   */ 
#include<iostream>
using namespace std;

          //overloading: sa shai hm da multiple (da deero sexona dpara) karuna dpara use kwal;

int sum(int a, int b){
    cout<<"Using funtion with 2 arguments"<<endl;
return a+b;
}


int sum(int a, int b, int c){
    cout<<"Using funtion with 3 arguments"<<endl;
return a+b+c;
}


    //Calculate the volume of a cylinder:
int volume(long double r, int h){
return (3.14* r * r *h);
}


    //Calculate the volume of a cube:
 int volume(int a){
    return (a * a * a);
 }


    //Rectangular box:
int volume(int l, int b, int h){
    return (l * b * h);
}



int main (){
    cout<<"The sum of 10 and 5 is: "<<sum(10,5)<<endl;
    cout<<"The sum of 10 , 5 and 5 is: "<<sum(10,5,5)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is: "<<volume(3,6)<<endl;
    cout<<"The volume of cube of side 3 is: "<<volume(3)<<endl;
    cout<<"The volume of cubiod of 3 , 7 and 6 is: "<<volume(3, 7, 6)<<endl;

    return 0;
}