#include<iostream>
using namespace std;

int main (){

                    //  Array With Examples:
   int h[8] = {10, 20, 30, 40, 50, 60, 70, 80};
          cout<<"This is h values: "<<endl;
    cout<<h[0]<<endl;
    cout<<h[1]<<endl;
    cout<<h[2]<<endl;
    cout<<h[3]<<endl;
    cout<<h[4]<<endl;
    cout<<h[5]<<endl;
    cout<<h[6]<<endl;
    cout<<h[7]<<endl;

         cout<<"These are cs marks:"<<endl;  
    int cs[3] = {96, 91, 89};
    cout<<cs[0]<<endl; 
    cs[1]=100;
    cout<<cs[1]<<endl; 
    cout<<cs[2]<<endl; 


                     //  Arrays through Loops:
            cout<<"Through for loop"<<endl;
    for (int n = 0 ; n < 3 ; n++)
   {
    cout<<"The value of cs "<<n<<" is: "<<cs[n]<<endl;
   }

        cout<<"Through while loop"<<endl;
   int k=0;
    while (k<3)
    {
       cout<<"The value of cs "<<k<<" is: "<<cs[k]<<endl;
       k++;
    }

         cout<<"Through do-while loop"<<endl;
    int o = 0;
    do {
        cout<<"The value of cs "<<o<<" is: "<<cs[o]<<endl;
        o++;}
    while (o<3);




                // Pointers and array:

int *p = cs;
       // We can also Print these value through this below method :

               /*Method 1*/
       cout<<"1st method: "<<endl;
cout<<"The value of *p is: "<<*p<<endl;
cout<<"The value of *(p+1) is: "<<*(p+1)<<endl;
cout<<"The value of *(p+2) is: "<<*(p+2)<<endl;


               /*Method 2*/
         cout<<"2nd method: "<<endl;
cout<<*(p++)<<endl; 
cout<<*(p)<<endl;
cout<<*(++p)<<endl;
return 0;
} 
