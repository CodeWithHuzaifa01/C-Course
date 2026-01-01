/*The program executed by huzaifa tahir*/
/*Q1 solve:*/ 

#include<iostream>
using namespace std;

int main (){
    int cs;
    int eng;
    int bio;
    int che;
    int maths;
    int total = 500;
  
    
    cout<<"The cs marks? "<<endl;
    cin>>cs;
    cout<<"The eng marks? "<<endl;
    cin>>eng;
    cout<<"The che marks? "<<endl;
    cin>>che;
    cout<<"The bio marks? "<<endl;
    cin>>bio;
    cout<<"The maths marks? "<<endl;
    cin>>maths;


    int all_sub =cs+eng+bio+che+maths;
    float average = 0;
    float percentage = 0;
    average = all_sub / 5.0;
    percentage = (all_sub / 500.0) * 100;


    cout<<"The obtain marks is: "<<all_sub<<endl;
    cout<<"The total marks is:"<<total<<endl;
    cout<<"The average is: "<< average <<endl;
    cout<<"The percentage is: "<< percentage <<endl;
    return 0;
}