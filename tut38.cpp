#include<iostream>
using namespace std;

int main(){
    // int age;
    // cout<<"Tell me Your age: "<<endl;
    // cin>>age;                                                             


    // if (age < 18)
    // {
    //   cout<<"You are not Allowed to Party: "<<endl;
    // }
    // else if (age == 18)
    // {
    //    cout<<"you are get party pass to come in Party: "<<endl;
    // }
    // else if (!(age > 59))
    // {
    //    cout<<"You Are Alowedd To The Party: "<<endl;
    // }
    // else if (age == 60 ){
    //     cout<<"Your now old "<<endl;
    // }
    // else{
    //     cout<<"nothing specail age restricted Mood "<<endl;
    // }
    
    for (int i = 0; i <= 50; i++)
    {
        
        if (i == 25)
        break;
        cout<<i<<endl;
        //  if (i == 25)
        // break;
    }
    
    for (int i = 0; i <= 50; i++)
    {
        
        if (i == 45)
        continue;
        cout<<i<<endl;
    }
    

return 0;
}