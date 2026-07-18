// #include <iostream>
//  #include <fstream>
//  using namespace std;
//  int main() {
//      ofstream deploy_data;
//      deploy_data.open("data.txt");
//      deploy_data<< "Welcome to File Handling in C++" << endl;
//      deploy_data<< "This data is stored in a file.";
//      deploy_data.close();
//      return 0;
//  }
//  #include<iostream>
    #include<iostream>
 #include <fstream>
  using namespace std;
  int main() {
     ifstream fin;
     fin.open("data.txt");
     string line;
     while (getline(fin, line)) {
     cout<< line << endl;
 }
  fin.close();

 return 0;

}
