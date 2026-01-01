#include<iostream>
using namespace std;

        class King{
            private:
        string name;
        string kingdom;
        int solders;
        int salary;
            public:
        void setinfo(string newName , string newKingdom , int newSolders , int newSalary);
        void getinfo(void){
            cout<<"The name of the king is:- "<<name<<"."<<endl;
            cout<<"The Empire they have which is :- "<<kingdom<<"."<<endl;
            cout<<"The "<<kingdom<<" have "<<solders<<" Soldiers."<<endl;
            cout<<"The Per solder Salary is "<<salary<<"$"<<"."<<endl;
            
        }

        };

    void  King :: setinfo(string newName , string newKingdom , int newSolders , int newSalary){
        name = newName;
        kingdom = newKingdom;
        solders = newSolders;
        salary = newSalary;
      
    };

int main(){

    King Sultan;
    King Imran_khan;
    King Elizbit;
    Sultan.setinfo("Sultan Abdul hamed ","Sultan e Usmania ", 15000 , 150);
    Sultan.getinfo();

    Imran_khan.setinfo("Imran Ahmad khan niazi ", "Riyasty Madina " ,700000 , 1099);
    Imran_khan.getinfo();

    Elizbit.setinfo("Queen Elizbit 1st" , "United Kingdom GB " , 450000 , 3500);
    Elizbit.getinfo();


return 0;
} 