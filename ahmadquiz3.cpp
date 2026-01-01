#include<iostream>
using namespace std;

int main(){
   int age;
   cout<<" what is ur age"<<endl;
   cin>>age;
   if ( age >  60){
    cout<<" I am Now old"<<endl;
   }
   else if ( age == 60  ){
    cout <<" Entering to  Old:"<<endl;
   }
   else {
    cout<<"I am a Younger"<<endl;
   }


     
// int boy;
// cout<<" what is ur age"<<endl;
// cin>>boy;
// if ( boy < 15 ){
//    cout<< " ur name well be not taken in nadra data base"<<endl;
// }

// else if ( boy == 18 ){
//    cout<<" ur in the list but not in proper data base"<<endl;
// }

//  else if ( boy > 40 ){
//    cout<<" it well be the in the data base properly"<<endl;
//  }

// else{
//    cout<<" if u are man you well surely in data base"<<endl;
// }

return 0;
}