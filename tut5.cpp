/*I have issue in line no:14 & :15 also in line no:39  */
#include<iostream>
using namespace std;
int main(){
int a=4 , b=5;
cout<<"Opreaters in C++: "<<endl;
cout<<"Following are the types opreaters of in C++: "<<endl;
                //1 Arithmetic_Opreaters:-
cout<<"The value of a + b is. "<< a + b<<endl;
cout<<"The value of a - b is. "<< a - b<<endl;
cout<<"The value of a * b is. "<< a * b<<endl;
cout<<"The value of a / b is. "<< a / b<<endl;
cout<<"The value of a % b is. "<< a % b<<endl;
        /* cout<<"The value of a++  is. "<< a++ <<endl;
        cout<<"The value of a--  is. "<< a-- <<endl;*/
cout<<"The value of ++a  is. "<< ++a <<endl;
cout<<"The value of --a  is. "<< --a <<endl;
cout<<endl;

//2 Assignement Opreaters -->Used to assign to value variables.
// int a=10 , b=17;
// char H='M'; 


                //3 Comperison operators:-
cout<<"Following are the comparison opreaters of in C++: "<<endl;
cout<<"The value of a == b is. "<<(a==b)<<endl;
cout<<"The value of a != b is. "<<(a!=b)<<endl;
cout<<"The value of a >= b is. "<<(a>=b)<<endl;
cout<<"The value of a <= b is. "<<(a<=b)<<endl;
cout<<"The value of a > b  is. "<<(a>b)<<endl;
cout<<"The value of a < b  is. "<<(a<b)<<endl;


                    //4 Logical operators:-
cout<<"Following are the Logical opreaters of in C++: "<<endl;
cout<<"The value of this Logical and opreator  ((a==b) && (a<b)) is :"<<((a==b) && (a<b))<<endl;
cout<<"The value of this Logical or opreator  ((a==b) || (a<b)) is :"<<((a==b) || (a<b))<<endl;
/*cout<<"The value of this Logical not opreator  (!(a==b)) is :"<<(!(a==b))<<endl;*/

    
// OR (||) Opreators are used in such condition when 3 condition is coreect and one is false (False and False give only wrong Answer).
// AND(&&) Opreators are used in such condition when 3 condition is false and one is coreect (True and True give only correct Answer).
// NOT (!) This have only two condition false or True(like True and true become false, and false and false become True).
    return 0;
}