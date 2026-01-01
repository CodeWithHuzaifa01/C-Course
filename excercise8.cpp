#include<iostream>
using namespace std;
    class Hacker;

    class WifiRouter{
        int Password;
        friend class Hacker;
        public:
        void setPassword(){
            Password = 98654;
        }
    };

    class Hacker{
        public:
        void hackSystem(WifiRouter r){
            cout<<"I hacked the password: " << r.Password<<endl;
        };

    };


int main(){
    WifiRouter w1;
    Hacker h1;
    w1.setPassword();
    h1.hackSystem(w1);
return 0;
}