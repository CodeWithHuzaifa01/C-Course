#include<iostream>
using namespace std;
    class Student{
        protected:
        int rollNumber;
        public:
        void set_roll_number(int r){
            rollNumber = r;
        }
        void get_roll_number(){
            cout<<"Your Roll Number is:- "<<rollNumber<<"."<<endl;
        };
    };

    class Exam : public Student{
        protected:
        float programming_Basic;
        float DSA;
        public:
        void set_Marks(float p1 , float d1){
            programming_Basic = p1;
            DSA = d1;
        }
        void get_Marks(){
            cout<<"Your programming_Basic marks is:- "<<programming_Basic<<"."<<endl;
            cout<<"Your DSA marks is:- "<<DSA<<"."<<endl;
        };
    };

    class Result : public Exam{
        public:
        void display_Result(){
            get_roll_number();
            get_Marks();
            float percentage = (programming_Basic + DSA)/2;
            cout<<"The Percentage of your Marks is:-" <<percentage<<"%."<<endl;
        };
    };
int main(){
    Result Huzaifa;
    Huzaifa.set_roll_number(07);
    Huzaifa.set_Marks(93.0 , 96.0);
    Huzaifa.display_Result();
return 0;
}