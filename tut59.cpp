#include<iostream>
#include<string>
using namespace std;


    class Student{

        string Name;
        int Grades;
        public: 
           void setinfo(string Newname,int NewGrades){
            Name = Newname;
            if (NewGrades>= 0 && NewGrades <=100 )
            {
                Grades = NewGrades;
            }
            else{
                cout<<"Error "<<Newname<<"'s Grades ( "<< NewGrades <<" ) is invalid sitting to 0. "<<endl;
                Grades =0;
            }
            
           }
           void showinfo(){
            cout<<"Student: "<<Name<<" , Grades "<< Grades << "%" <<endl;
           }
           void info(){
            if (Grades >=50)
            {
                cout<<Name<<" has Passed."<<endl;
            }
            else{
                cout<<Name<<" has Failed."<<endl;
            }
            

           }
    };
int main(){

    Student Khan , king ;
    Khan.setinfo("Khan", 87);
    Khan.showinfo();
    Khan.info();

    king.setinfo("King", 45);
    king.showinfo();
    king.info();

return 0;
}