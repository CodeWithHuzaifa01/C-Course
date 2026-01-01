#include<iostream>
using namespace std;
    class RepairMan;
    class Mobile{
        int batteryStatus;
        friend class RepairMan;
        public:
        void SetbatteryStatues(){
            batteryStatus = 0;
        }
    };

    class RepairMan{
        public:
        void ChangeBattery(Mobile m){
            m.batteryStatus=100;
            cout<<"Phone fixed! Battery Become healthy."<<m.batteryStatus<<"%"<<endl;
        }
    };
int main(){
    Mobile Samsung;
    RepairMan Ali;
    Ali.ChangeBattery(Samsung);
return 0;
}