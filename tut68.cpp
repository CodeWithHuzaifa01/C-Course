#include<iostream>
using namespace std;
    class Y;
    class X{
        int data;
        public:
        void SetValue(int value){
            data = value;
        }
        friend void add(X , Y );

    };

    class Y{
        int num;
        public:
        void SetValue(int value){
            num = value;
        }
        friend void add(X , Y );

    };

    void add(X o1, Y o2){
        cout<<"Summing the data of X and Y:- "<<o1.data + o2.num<<endl;
    }
int main(){
    X a1;
    a1.SetValue(6);
    Y b1;
    b1.SetValue(8);
    add(a1 , b1);
return 0;
}