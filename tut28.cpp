                 /*   The programm is executed by Huxaifa tahir   */ 
    //OOPs - Classes and Objects

    //C++ initially called --> C with classes by stroustroup
    //Class --> extension of structures (in C)
    //Structures had limitations 
    //       - Members are public
    //       - No methods 
    //classes --> structures + more
    //classes --> can have methods and properties
    //classes --> can make few memebers as a private & few as public
    //structers in C++ are typedef
    //you can declare objects along with the class declaration 
    //     *like this:
        /* class Employye{
               class definaition
         } huzaifa, ahmad, e t c;*/
    // huzaifa.salarey --> at makes no sense if salery is private  
        
                   //Nesting of member function
#include<iostream>
#include<string>
using namespace std;

    class binary{
        string s;
    public:
        void read(void);
        void chk_bin(void);
        void ones_compliment(void);
        void display(void);
    };

void binary :: read(void){
    cout<<"Enter the binary number: "<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
       if(s.at(i)!='0' && s.at(i)!='1'){
       cout<<"Incorrect binary Format"<<endl;
       exit(0);
       }
    }
    
}

void binary :: ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++){
        if (s.at(i) =='0')
        {
           s.at(i) = '1';
        }
        
        else
        {
          s.at(i) ='0';
        }
    }
    
}

void binary :: display(void)
{
    cout<<"Displaying your binary numbers:\t "<<endl;
    for (int i = 0; i < s.length(); i++){
        {
            cout<<s.at(i);
        }
    }
    cout<<"\n";
}

int main (){
    
    binary h;
    h.read();
    h.chk_bin();
    h.display();
    h.ones_compliment();
    h.display();
        return 0;
}