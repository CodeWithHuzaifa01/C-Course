#include<iostream>
using namespace std;

int main(){
    // int marks[5]={1 , 3 ,2 , 9};
    // int max = marks[0];
    // for(int i = 1; i < 5 ; i++){
    //         if(marks[i]>max){
    //                 max=marks[i];
    //             }
    //         }
    //         cout<<"Maximum num is "<<max<<endl;
    // int marks[5]={5,7, 3 ,2 , 9};
    // int min = marks[0];
    // for(int i = 1; i < 5 ; i++){
    //         if(marks[i]<min){
    //                 min=marks[i];
    //             }
    //         }
    //         cout<<"minimum num is "<<min<<endl;
    //         // int sum = 0;
            // for (int i = 0 ; i < 5 ;i++){
                //     sum = sum + marks[i];
                // }
                // cout<<"Sum is:-"<<sum<<endl;
                // float Avg = sum / 5.0;
                // cout<<"Average is "<<Avg<<endl; 
                // int marks[5];
                // for (int i = 0; i < 5; i++)
                // {
                //     cout<<"Enter marks for students "<<i + 1<<endl;
                //     cin>>marks[i];
                //     {
                //     int totle_marks = marks[i];
                //     }
                // }
                int marks[5] = {85, 90, 78, 88, 92};
int key = 85;                  // Value to search
bool found = false;
int position = -1;

for(int i = 0; i < 5; i++) {
    if(marks[i] == key) {
        found = true;
        position = i;
        break;                 // Exit loop once found
    }
}

if(found) {
    cout << "Found at index " << position;
} else {
    cout << "Not found";
}
                return 0;
}