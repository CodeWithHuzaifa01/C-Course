#include<iostream>

using namespace std;

int main (){
     int age;
     cout<< "Tell me ur age? ";
     cin>>age;

          // 1: Selection control stracture , If-else , If-else ladder.
    //  if(age<18){
    //  cout<<"You are a baby now."<<endl;
    //  }
    //  else if (age==18){
    //      cout<<"Now u r boy. "<<endl;
    //  }
    //  else{
    //     cout<<"You are a metuare now. "<<endl; } 
       

           // 2: Selection control stracture: Switch case statement;
    switch (age)
    {
    case 11:
        cout<<"I am 11 year old. "<<endl;
        break;
    
    case 18:
        cout<<"I am 18 year old. "<<endl;
        break;
         
    case 22:
        cout<<"I am 22 year old. "<<endl;
         break;
        
    default:
      cout<<"No anymore cases."<<endl;
         break;
    }
     cout<<"Yup u got it switch case *";


    return 0;
}


