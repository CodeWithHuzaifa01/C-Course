#include<iostream>
using namespace std;

int main (){
    int age;
    cout<<"Tell me your age? "<<endl;
    cin>>age;

    if (age<15)
    {cout<<"You are now baby. "<<endl;
    }

    else if  (age<=18){
    cout<<"You are now a young boy. "<<endl;
    }

    else
     {
        cout<<"Other wise you are become a young man. " <<endl;
     }
  
  switch (age)
 {
  case 16:
cout<<"This my 16th annversaryy. "<<endl;
 break;
    
    case 25:
    cout<<"Alhamdulillah i am 25th Mashallah. "<<endl;
break;

case 35:
cout<<"The peak of youngness. "<<endl;
break;

default:
cout<<"No more"<<endl;
break;
 }
    return 0;
}