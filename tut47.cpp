
#include<iostream>
using namespace std;

    class employye{

        private:
            int salary , shirtNo;
        public:
         string Skincolor , car;
    void setdata(int salary ,int shirtNo);
    void getdata(){
        cout<<"The name of Employye is Ali."<<endl;
        cout<<"The Skincolor of ALi is "<<Skincolor<<"."<<endl;
        cout<<"The salary of Ali is counted in dollers like "<<salary<<"$."<<endl;
        cout<<"The shirtNo of Ali is "<<shirtNo<<"."<<endl;
        cout<<"The branded car which Ali have the Name is "<<car<<"."<<endl;
     }

    };
    void employye :: setdata(int salary1 , int shirtNo1){
        salary = salary1;
        shirtNo = shirtNo1;
    }


int main(){

    employye ali;
    ali.Skincolor = "OFF-White";
    ali.car = "Mercidies maybeach";
    ali.setdata(5000,07);
    ali.getdata();

return 0;
}