    // This is the ATM machine withdrawel Process:-
// #include<iostream>
// using namespace std;

// int main(){
//     int _ATMCash = 100000;
//     int balance;
//     int withdraw;
//     cin>>withdraw;

//     if(withdraw <= _ATMCash){
//     if(withdraw <= balance){
//     if(withdraw % 500 == 0){
//         cout<<"Transiction successful"<<endl;
//         else{
//         cout<<"Amount must be multiple of 500"<<endl;
//         else cout<<"Insufficeint"<<endl;
//         else cout<<
//     }
//     }
//     }

// return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
// int atmCash = 1000000; // ATM available cash
// int balance = 250000; // user account balance
// int withdraw;
// cout<<"Give the amount you want:-"<<endl;
// cin >> withdraw;
// if (withdraw <= atmCash) { 
// if (withdraw <= balance) {
// if (withdraw % 100 == 0)
// cout << "Transaction Successful";
// else
// cout << "Amount must be multiple of 500";
// } else cout << "Insufficient Balance";
// } else cout << "ATM Low Cash";
// return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int atmCash = 1000000; // ATM available cash
    int balance = 250000;  // user account balance
    int withdraw;

    cout << "Give the amount you want:-" << endl;
    cin >> withdraw;

    // The order of failure checks is crucial.

    if (withdraw % 100 != 0) {
        // 1. Check for valid denomination first.
        cout << "Amount must be a multiple of 100." << endl;
    } else if (withdraw > balance) {
        // 2. Check for insufficient user balance.
        cout << "Insufficient Balance" << endl;
    } else if (withdraw > atmCash) { // <--- **This is the corrected position**
        // 3. Check for ATM low cash.
        cout << "ATM Low Cash" << endl;
    } else {
        // This 'else' block executes only if ALL checks pass.
        balance -= withdraw; 
        cout << "Transaction Successful" << endl;
        // cout << "New Balance: " << balance << endl; 
    }

    return 0;
}