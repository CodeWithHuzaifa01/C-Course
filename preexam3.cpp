#include<iostream>
using namespace std;
    class Employee{
        public:
        int id;
        Employee(int inpId){
            id = inpId;
        }
    };
    class Programmer : public Employee{
        public:
        int languageCode;
        Programmer();

    };
int main(){
    // Employee e1(50);
    Programmer p1();
return 0;
}