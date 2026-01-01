#include<iostream>
#include<cstring>
using namespace std;
inline  int sum(int a , int b){

        //These below lines are static veriable which we dont use with inline function
        //This static veribale are a specific type which retain its value after execution of program
        // static int q = 0; //This executes only once in program
        // q = q + 2; //Next time this function is run, The value of q is retained 
        return a+b;    //+q;
    }

    float takemoney (int givemoney , float source = 1.03  ){
        return givemoney * source;
    }
    // int const strlen(const char*);
int main(){
    // int c , d;
    // cout<<"Whats the value of c and d is: "<<endl;
    // cin>>c>>d;
    // cout<<"The sum of c and d is: "<<sum(c , d)<<endl;
    // cout<<"The sum of c and d is: "<<sum(c , d)<<endl;
    // cout<<"The sum of c and d is: "<<sum(c,  d)<<endl;

    int money=10000;
    cout<<"If you have "<<money<<" in your bank account you will recive "<<takemoney(money )<<"Rs after 1 months"<<"."<<endl;
    cout<<"If VIP: you have "<<money<<" in your bank account you will recive "<<takemoney(money ,1.1)<<"Rs after 1 months"<<"."<<endl;




return 0;
} 