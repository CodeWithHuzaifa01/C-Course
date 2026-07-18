#include<iostream>
using namespace std;

class Wallet{
    private:
        double balance;
    public:
        Wallet(){
            balance = 0;
        }
        Wallet(double n){
            balance = n;
        }

        Wallet operator++(){
            balance += 100;
            return balance;
        }

        Wallet operator+(Wallet w){
            Wallet imgw;
            imgw.balance = balance + w.balance;
            return imgw;
        }

        bool operator<(Wallet w){
            return balance < w.balance;
        }

        bool operator>(Wallet w){
            return balance > w.balance;
        }

        bool operator==(Wallet w){
            return balance == w.balance;
        }

        void display(){
            cout << "Balance = " << balance;
        }
};

int main(){
    double b1, b2;

    cout << "Enter Balance of Wallet 1: ";
    cin >> b1;
    cout << "Enter Balance of Wallet 2: ";
    cin >> b2;

    Wallet w1(b1);
    Wallet w2(b2);

    ++w1;
    cout << "After Bonus: Wallet 1 ";
    w1.display();
    cout << endl;

    Wallet w3 = w1 + w2;
    cout << "After Merging: Total ";
    w3.display();
    cout << endl;

    cout << "Comparison: ";
    if(w1 < w2){
        cout << "Wallet 1 has lower balance.";
    }
    else if(w1 > w2){
        cout << "Wallet 1 has higher balance.";
    }
    else{
        cout << "Both wallets have equal balance.";
    }
    cout << endl;

    cout << "Equality Check: ";
    if(w1 == w2){
        cout << "Wallets are equal.";
    }
    else{
        cout << "Wallets are not equal.";
    }
    cout << endl;
}