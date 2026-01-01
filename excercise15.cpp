#include<iostream>
using namespace std;
    class Exam{
        int marks;
        public:
        // Exam(){}
        Exam(int m = 90){
            marks = m;
        };
        Exam(Exam &obj){
        cout<<"Warning: Cheating Detected! Copying answers..."<<endl;
            marks = obj.marks;
        }
        void show(){
            cout<<"Marks is:-" << marks<<"."<<endl;
        }
    };
int main(){
    Exam Student1;
    Student1.show();
    // Exam Student2 = Student1;
    // Student2.show();
    Exam Student2(Student1);
    Student2.show();
    //Dwanha Copy constructer method Tek d. 2 ways of Declation or methodology of Copy constructer
return 0;
}