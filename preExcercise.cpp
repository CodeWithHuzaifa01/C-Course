#include<iostream>
using namespace std;
    class  Virus{
        public:
        Virus(){
            cout<<"Virus Created!"<<endl;
        }
        ~Virus(){
            cout<<"Virus Destroyed!"<<endl;
        }
    };
int main(){
    Virus V1;
return 0;
}