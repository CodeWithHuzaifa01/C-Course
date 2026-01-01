#include <iostream>
#include <string>

using namespace std;

class Student
{

private:
    string name;
    int grade;

public:
    void getpass(string Newname, int Newgrade);
    void checkpass()
    {

        cout << "The student name is " << name << ", and The grade takes " << name << " is " << grade << "%." << endl;
        if (grade >= 50 && grade <= 100)
        {
            cout << "Above 50% of The Student will be consider pass. " << endl;
        }

        else
        {
            cout << "Otherwise the Grade below then 50% marks consider Fail. " << endl;
        }
    }
};

void Student ::getpass(string Newname, int Newgrades)
{
    name = Newname;
    grade = Newgrades;
}

int main()
{
    Student bilal;
    Student ahmad;
    Student ali;
    ahmad.getpass("Ahmad", 100);
    ahmad.checkpass();

    bilal.getpass("Bilal ", 40);
    bilal.checkpass();

    ali.getpass("Ali ", 80);
    ali.checkpass();
    return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {

// private:
//     string name;
//     int grade;

// public:
//     void setinfo(string Newname, int Newgrade)
//     {
//         name = Newname;
//         if (Newgrade >= 0 && Newgrade <= 100)
//         {
//             grade = Newgrade;
//         }
//         else
//         {
//             cout << "Error " << Newname << "'s grades ( " << Newgrade << " ) is invalid sittng to 0. " << endl;
//             grade = 0;
//         }

//     }
//     void showinfo()
//     {
//         cout << "Student: " << name << " ,Grade " << grade << "%" << endl;
        
//     }

//     void outinfo()
//     {

//         if (grade >= 50)
//         {

//             cout << name << " has Passed." << endl;
//         }
//         else
//         {
//             cout << name << " has Failed " << endl;
//         }
//     }
// };

// int main()
// {   
//     Student TestStudent;
//     Student Ali;
//     Student Ahmad;
//     Student Alyan;
//     Ali.setinfo("Ali" , 75);
//     Ali.showinfo();
//     Ali.outinfo();

//     Ahmad.setinfo("Ahmad" , 100);
//     Ahmad.showinfo();
//     Ahmad.outinfo();

//     Alyan.setinfo("Alyan" , 30);
//     Alyan.showinfo();
//     Alyan.outinfo();

//     TestStudent.setinfo("Test anonemous", 150);
//     TestStudent.showinfo();
//     TestStudent.outinfo();
//     return 0;
// }