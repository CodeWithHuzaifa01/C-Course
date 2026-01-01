#include<iostream>
using namespace std;
    class SpyB;

    class SpyA{
        friend void exchange(SpyA & x , SpyB & y);
        int data;
        public:
         void setvalue(int value){
            data = value;
         }
         void display(){
            cout<<data<<"."<<endl;
         }
    };

    class SpyB{
        friend void exchange(SpyA & x , SpyB & y);
        int data1;
        public:
         void setvalue(int value){
            data1 = value;
         }
         void display(){
            cout<<data1<<"."<<endl;
         }
    };

    void exchange(SpyA & x , SpyB & y){
        int tmp = x.data;
        x.data = y.data1;
        y.data1 = tmp;
    }
int main(){
    SpyA A1;
    A1.setvalue(10);
    SpyB B2;
    B2.setvalue(20);
    cout<<"The value before swap of A1 is "<<10<<".";
    cout<<"\nThe value before swap of B2 is "<<20<<".";


    exchange(A1 , B2);
    cout << "\nThe value of A1 after exching Become:-";
    A1.display();
    cout << "The value of B2 after exching Become:-";
    B2.display();
return 0;
}