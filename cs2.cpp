#include<iostream>
using namespace std;
#include <cmath> 
int main() {
    double a, b, c;
    
    // Input coefficients
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    // Check if the discriminant is positive, negative or zero
    if (discriminant > 0) {
        // Two distinct real roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different.\n";
        cout << "Root 1 = " << root1 << "\n";
        cout << "Root 2 = " << root2 << "\n";
    } else if (discriminant == 0) {
        // One real root
        double root = -b / (2 * a);
        cout << "Roots are real and the same.\n";
        cout << "Root = " << root << "\n";
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different.\n";
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i\n";
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i\n";
    }

    return 0;
}

// #include<iostream>
// #include<math.h>
// using namespace std;

// int main (){
//     double a , b , c ;
//     cout<<"Enter coeifficent a , b , c: "<<endl;
//     cin>>a>>b>>c;

//     double discriment = b * b - 4 * a * c;
//     if (discriment>0){
//         // Two distinct real roots
//         double root1 =(-b + sqrt(discriment)) / 2 * a;
//         double root2 =(-b - sqrt(discriment)) / 2 * a;
//         cout << "Roots are real and different.\n";
//         cout<<"Root 1 "<<root1<<endl;
//         cout<<"Root 2 "<<root2<<endl;
//     }   else if (discriment == 0){
//               // One real root
//         double root = -b / (2 * a) ;
//         cout << "Roots are real and the same.\n";
//         cout << "Root = " << root << "\n";
//     } else{
//         double realPart = -b / (2 * a);
//         double imagnaryPart = sqrt(-discriment) / (2 * a);
//         cout << "Roots are complex and different.\n";
//         cout<<"root 1 "<<realPart<<" + "<<imagnaryPart<<"i"<<endl;
//         cout<<"root 2 "<<realPart<<" - "<<imagnaryPart<<"i"<<endl;
//         }


//     return 0;
// }

