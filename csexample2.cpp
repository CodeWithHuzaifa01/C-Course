#include<iostream>
using namespace std;

int main (){
    int eng=67;
    int sst=56;
    int urdu=90;
    int math=87;
    int phy=77;
    int total=500;

    int all_sub=eng+sst+urdu+math+phy;
    float average = (all_sub / 5.0);
    float percentage = (all_sub / 500.0)*100;

    cout<<"The obtain marks is: "<<all_sub<<endl;
    cout<<"The total marks is: "<<total<<endl;
    cout<<"The average is: "<<average<<endl;
    cout<<"The percentage is: "<<percentage<<endl;

    return 0;
}