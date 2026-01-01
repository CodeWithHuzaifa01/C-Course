#include<iostream>
using namespace std;

int main (){
    int maths , cs , phy , bio , sst;
    int total = 500.0;

    cout<<"The maths marks? "<<endl;
    cin>>maths;
    cout<<"The cs marks? "<<endl;
    cin>>cs;
    cout<<"The phy marks? "<<endl;
    cin>>phy;
    cout<<"The bio marks? "<<endl;
    cin>>bio;
    cout<<"The sst marks? "<<endl;
    cin>>sst;

    int all_sub = maths + cs + phy + bio + sst;
    float average = (all_sub/5.0);
    float percentage = (all_sub/500.0)*100;
    


    cout<<"The obtain marks is: "<<all_sub<<"."<<endl;
    cout<<"The total marks  is "<<total<<"."<<endl;
    cout<<"The average is "<<average<<"."<<endl;
    cout<<"The percentage is "<<percentage<<"%"<<endl;
    return 0;
}