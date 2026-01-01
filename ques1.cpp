#include<iostream>
using namespace std;

int main(){

    int score;
    cout<<"The Give value is about score "<<endl;             
    cin>>score;
                                                               
    if (score >= 90 && score <= 100)
    {
            cout<<"The score Grade is A:"<<score<<endl;
    }
        else if (score >= 80 && score <= 89)
        {
            cout<<"The score Grade is B:"<<score<<endl;
        }

        else if (score >= 70 && score <= 79)
        {
            cout<<"The score Grade is C:"<<score<<endl;
        }
        else if (score >= 60 && score <= 69 )
        {
            cout<<"The score Grade is D:"<<score<<endl;
        }
        else if (score >= 0 && score <= 59)
        {
            cout<<"The score Grade is E:"<<score<<endl;
        }
     
        else {
            cout<<"There is no such Grade"<<score<<endl;   
        }
                                                            
return 0;
}