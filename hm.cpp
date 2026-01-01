#include<iostream>
using namespace std;
// typedef struct employee{
// int eId;
// char favChar;
// float salery; 
// }ep;


// union notes {
// int wheat;
// char car;
// float euros; 
// };

int main (){
    // enum Notes {pkr , doller , euro , pounds};
    // Notes num1 = doller;
    // cout<<num1<<endl;
    // cout<<pkr<<endl;
    // cout<<doller<<endl;
    // cout<<euro<<endl;
    // cout<<pounds<<endl;





    // union notes m1;
    // m1.wheat = 40;
    // m1.car = 'H';
    // m1.euros = 300.56;
    // cout<<m1.euros<<endl;
    
    // ep ali;
    // ali.eId = 1;
    // ali.favChar = 'k';
    // ali.salery = 999999999999999;
    
    // cout<<"The value of: "<<ali.eId<<endl;
    // cout<<"The value of: "<<ali.favChar<<endl;
    // cout<<"The value of: "<<ali.salery<<endl;


                 //3 Loops :   
    // int a = 5 , b = 1;
    // for (b = 1 ; b<=5 ; b++){
    // cout<<a+b<<endl;
    // }

    // int a = 5 , b = 1;
    // while (b<=5){
    // cout<<a+b<<endl;
    // b++;
    // }

    // int a = 6 , b = 5;
    // do {cout<<a+b<<endl;
    // b++;}
    // while (b<=10);
             



                //  Breaks and Continue statement : 
    // for (int i = 0 ; i <= 50 ; i++)
    // {
    // if (i==20){
    // break;}
    // cout<<i<<endl;
    // }

    // for (int i = 0 ; i <= 50 ; i++)
    // { if (i==46){
    // continue;}
    // cout<<i<<endl;
    // }
    



                         // Pointers:
    // int a=50;
    // int* b = &a;
    // cout<<"The address of a is : "<<&a<<endl;
    // cout<<"The address of a is : "<<b<<endl;
    // cout<<"The value at address b is : "<<*b<<endl;

    // cout<<"This is double assign Pointers: "<<endl;
    // int **h = &b;
    // cout<<"The address of b is:"<<&b<<endl;
    // cout<<"The address of b is: "<<h<<endl;
    // cout<<"The value at address (h) is: "<<**h<<endl;





                 //  Arrays Examples:
    // int h[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    // cout<<h[0]<<endl;
    // cout<<h[1]<<endl;
    // cout<<h[2]<<endl;
    // cout<<h[3]<<endl;
    // cout<<h[4]<<endl;
    // cout<<h[5]<<endl;
    // cout<<h[6]<<endl;
    // cout<<h[7]<<endl;

    // cout<<"These are cs marks:"<<endl;  
    // int cs[3] = {96, 91, 89};
    // cout<<cs[0]<<endl; 
    // cs[1]=100;
    // cout<<cs[1]<<endl; 
    // cout<<cs[2]<<endl; 





                  //  Arrays through Loops:
//     for (int h = 0 ; h < 3 ; h++)
//    {
//     cout<<"The value of cs "<<h<<" is: "<<cs[h]<<endl;
//    }
//    int h=0;
//     while (h<3)
//     {
//        cout<<"The value of cs "<<h<<" is: "<<cs[h]<<endl;
//        h++;
//     }
    // int h = 0;
    // do {
    //     cout<<"The value of cs "<<h<<" is: "<<cs[h]<<endl;
    //     h++;}
    // while (h<3);




                    // Pointers and array: 
    // int *g = cs;
    // cout<<"The value at *g is: "<<*(g)<<endl;
    // cout<<"The value at *(g+1) is: "<<*(g+1)<<endl;
    // cout<<"The value at *(g+2) is: "<<*(g+2)<<endl;
    // cout<<*(g++)<<endl;
    // cout<<*(g)<<endl;
    // cout<<*(++g)<<endl;

    // int a , b , c , d ,max;
    // cout<<"Following are the values "<<endl;
    // cin>>a>>b>>c>>d;

    // max=(a>b)? a : b;
    // max=(max>c) ? max : c;
    // max=(max>d) ? max : d;
    // cout<<"The maximum num is: "<<max<<endl;




    // int a, b, c, d;
    // std::cout << "Enter four numbers: ";
    // std::cin >> a >> b >> c >> d;

    // int max_value = a; // Assume a is the max initially

    // if (b > max_value) max_value = b;
    // if (c > max_value) max_value = c;
    // if (d > max_value) max_value = d;

    // cout << "The maximum value is: " << max_value <<endl;

// int h , u , z , i , max;
// cout<<"Folowing are int values"<<endl;
// cin>>h>>u>>z>>i;

// max=(h>u) ? h : u;
// max=(max>u) ? max : u;
// max=(max>z) ? max : z;
// max=(max>i) ? max : i;

// cout<<"The maximum values is: "<<max<<endl;

    int a = 5;
    int b = 7;
    while (a>0 , b<10)
    {
        // cout<<a<<endl;
        {
            cout<<b<<endl;
            b++;
            cout<<a*b<<endl;
        }
    }
    

    return 0;
}

