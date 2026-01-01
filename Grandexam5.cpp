#include<iostream>
using namespace std;
     class Vault{
        protected:
         int money;
         public:
        Vault(){}
        friend void auditor(Vault v);
        Vault(int M){
            money = M;
            cout<<"Vault Opened"<<endl;
        }
        ~Vault(){
            cout<<"Vault Closed"<<endl;
        }
     };

    void auditor(Vault v){
        cout<<"The Money in Vault is:- "<<v.money<<endl;
    };

    class VIPVault : public Vault{
        public:
        int extraGold;
        VIPVault(int m, int g) : Vault(m){
            extraGold = g;
        };
        void showTotal(){
            cout<<"The Total Gold and Money is:- "<<(money + extraGold)<<endl;
        };
    };
int main(){
            VIPVault VV1(1000, 500);
            auditor(VV1);
            VV1.showTotal();
return 0;
}