//Programm executed By Huzaifa Tahir // challenge gemini epi of 24th
#include<iostream>
using namespace std;
     class Visitor{

         static int visitor;
         public:
         void setData(){
            visitor++;
        };
        void displayData(){
            cout<<"visitor will come today Inshallah ,Visitor No:-"<<visitor<<"."<<endl;
        }
        };
int Visitor :: visitor;
int main(){
    Visitor V1,V2,V3;
    V1.setData();
    V1.displayData();
    
    V2.setData();
    V2.displayData();

    V3.setData();
    V3.displayData();
}