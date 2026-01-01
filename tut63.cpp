#include<iostream>
using namespace std;
    
    class Employye{
        int id;
        int salary;
         public:
        void setData(void){
            salary = 1200;
            cout<<"Enter the ID of Employye:-"<<endl;
            cin>>id;
        }
        void getData(void){
            cout<<"The Employye ID is:-"<<id<<endl;
        }

    };


int main(){
  Employye khan , king , Ahmad , huzaifa;
//   khan.setData();
//   khan.getData();

//   king.setData();
//   king.getData();
Employye pr[4];
for (int i = 0; i < 4; i++)
{
    pr[i].setData();
    pr[i].getData();
}

return 0;
}