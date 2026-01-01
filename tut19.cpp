#include<iostream>
using namespace std;


            //(No 1)struct snappit method (before difine main function)    
typedef struct Employe
{
   int eId;
   char favchar;
   float riyal;
}em;



            //(No 2)Union snappit method (before difine main function)      

union platinum
{
   int gold;
   char silver;
   float notes;
};



int main (){



                //  struct ----> (Use for differ information at a same time: )
    em ahmad ;
    ahmad.eId =777; 
    ahmad.favchar ='H'; 
    ahmad.riyal =63.2; 
    cout<<"1st eId is: "<<ahmad.eId<<endl;
    cout<<"2nd favchar is: "<<ahmad.favchar<<endl;
    cout<<"3rd riyal is: "<<ahmad.riyal<<endl;



                 //  Union ----> (We can print only one data at a time bcx for best memory optimision: )
    union platinum goldsmith;
    goldsmith.gold = 1200;
    goldsmith.silver = 'M';
    goldsmith.notes = 105.88;
    cout<<goldsmith.notes<<endl;


    enum Cars{mercedies , audi , bentle , rolls_royce };
    cout<<"The Futurestic car ever mercidies: "<<mercedies<<endl;
    cout<<"The sigma  car ever audi: "<<audi<<endl;
    cout<<"The luxury car ever Bentle: "<<bentle<<endl;
    cout<<"The Brand  car ever rolls_royce: "<<rolls_royce<<endl;

    return 0;
}