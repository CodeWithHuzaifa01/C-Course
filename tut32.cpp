#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {

        cout << "The Id of this employee is " << id << " and this is employee number: " << count << endl;
    }
    static void getcount(void)
    {
        // Static veriables or function da ba serp static function ya da veriable dpara valid e baqi bnde error throw ky:
        cout << "The value of count is: " << count << endl;
    }
};

// Count is the static data member of Employee:
int Employee::count; // Default Value is 0. //Moung ba dalta value da default
// na badlao laka che da kam zy na e start kao value ba wrta dalta initialize kao like count=n;

int main()
{
    Employee man, women, boy, girl;
    man.setData();
    man.getData();
    Employee::getcount();

    women.setData();
    women.getData();
    Employee::getcount();

    boy.setData();
    boy.getData();
    Employee::getcount();

    girl.setData();
    girl.getData();
    Employee::getcount();
    return 0;
}