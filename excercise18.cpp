#include<iostream>
using namespace std;
    class OldPhone{
       public:
       void switchOn(){
        cout<<"Switching on... Old Screen Display."<<endl;
       }
    };

class SmartPhone : public OldPhone{
    public:
    void switchOn(){
        cout<<"Switching on... Apple Logo Display."<<endl;
    }
};
int main(){
    // OldPhone OD;
    // OD.switchOn();
    SmartPhone SP;
    SP.OldPhone::switchOn();
    SP.switchOn();

return 0;
}