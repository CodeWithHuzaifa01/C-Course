#include<iostream>
using namespace std;
        // Function and Function prototype -->



/*No 1*/       /* Mung ba da main body na bahr yaw bal function 
           leko aw dagha ba da bahr na call kao: */



/*No 2*/       /* Khu da Function prototype da role d ka charta 
           dagha Function mung da (main) na lande waleku  
           nu mung ba da (main) na bara da prototype function 
           aghesty v aw da ba program pa d majbore ky che 
           da ba charta e assurity wrky da main na lande e ogora: */



/*No 3*/       /*Mnug bya multiple nor execution further da void()
           pa waja kwalay shu lande e example d:  */



int sum(int a , int b);
void khan();
void ali();
int main (){
    int num1 , num2;
    cout<<"\nThe First number is: ";
    cin>>num1;
    cout<<"\nThe second number is: ";
    cin>>num2;
    cout<<"\nThe sum is: "<<sum(num1 , num2)<<endl;
    khan();
    ali();
    return 0;
}
int sum(int a , int b){
    int c = a+b;
    return c;
    }
    void khan(){
        cout<<"O:K"<<endl;
    }
    void ali(){
        cout<<"\nSalam";
    }