#include<iostream>
using namespace std;

int main (){
    int urdu/*=98*/;
   int sst/*=79*/;
   int eng/*=90*/;
   int phy/*=76*/;
   int bio/*=56*/;
   int che/*=87*/;
   int isl/*=68*/;
   int all_sub_marks=700;

// int total = urdu+sst+eng+phy+bio+che+isl;
//     float average = 0;
//     float percentage = 0;
//     average = (total/7.00);
//     percentage = (total / 700.00)*100;

    cout<<"The urdu marks ?"<<endl;
    cin>>urdu;
    cout<<"The sst marks ?"<<endl;
    cin>>sst;
    cout<<"The eng marks ?"<<endl;
    cin>>eng;
    cout<<"The phy marks ?"<<endl;
    cin>>phy;
    cout<<"The bio marks ?"<<endl;
    cin>>bio;
    cout<<"The che marks ?"<<endl;
    cin>>che;
    cout<<"The isl marks ?"<<endl;
    cin>>isl;

    int total = urdu+sst+eng+phy+bio+che+isl;
    // float average = 0;
    // float percentage = 0;
   float average = (total/7.0);
   float percentage = (total / 700.0)*100;

 cout<<"The obtain marks is: "<<total<<endl;
 cout<<"The total marks  is: "<<all_sub_marks<<endl;
 cout<<"The average value is: "<<average<<endl;
 cout<<"The percentage is: "<<percentage<<endl;
    return 0;
}