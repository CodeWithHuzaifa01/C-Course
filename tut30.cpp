              /*   The programm is executed by Huxaifa tahir   */ 
// #include<iostream>
// #include<string>
// using namespace std;

// int main (){
//     string Boy;
//     Boy = "Huzaifa tahir";
//     cout<<"How many latters contain in string boy named Huzaifa tahir: "<<Boy.size()<<endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     // Create our string
//     string my_str("My name is huzaifa and i from earth");
//     // Target string to search for
//     string target_string("earth");

    // cout << "Is " << target_string << " a substring of " << my_str << " ?\n";
    // size_t substring_length = my_str.find(target_string);
    // if (substring_length == 0)
    //     cout << "No\n";
    // else
    //     cout << "Length of matched substring = " << substring_length << std::endl;

//     return 0;
// }

// #include<iostream>
// #include <string>
// using namespace std;

// int main (){
//   string alphabit;
//   alphabit = "abcdefghijklmnopqurstuvwxyz";
//   cout<<"How many words include in Alphabit: "<<alphabit.size(); 
//     return 0;
// }
#include<iostream>
#include <string>
using namespace std;

int main (){
  string Nameing_law("Salam How was Eid going bruhs: ");
  string alphabit = "bruhs";
  

    cout << "Is " <<alphabit << " a substring of " << Nameing_law << " ?\n";
   size_t substring_length = Nameing_law.find(alphabit);
    if (substring_length == 0)
        cout << "No\n";
    else
        cout << "Length of matched substring = " << substring_length << std::endl;

    return 0;
}