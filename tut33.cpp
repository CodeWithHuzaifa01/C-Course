#include<iostream> /*>>system header file*/

using namespace std;
 
int  c = 45;
int main (){

    // int a = 5 , b = 1;
    // // cout<<"This is the or opraition: "<<((a == b) || (a<=b))<<endl;
    // // cout<<"This is the AND opraition: "<<((a > b) && (b < a))<<endl;
    // // cout<<"This is NOT opreatation: "<<(!(a<b));
    // cout<<"This is NOT opreatation: "<<(!(a<b) &&(a>b));
    

    int a , b , c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    c = a + b;
    cout<<"The sum is c: "<<c<<endl;
    cout<<"The global is c: "<<::c<<endl;

    return 0;
}




// OR (||) Opreators are used in such condition when 3 condition is coreect and one is false (False and False give only wrong Answer).
// AND(&&) Opreators are used in such condition when 3 condition is false and one is coreect (True and True give only correct Answer).
// NOT (!) This have only two condition false or True(like True and true become false, and false and false become True).




