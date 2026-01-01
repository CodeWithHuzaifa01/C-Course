#include <iostream>
using namespace std;

class Employee
{
    friend void compareSalary(Employee e1, Employee e2);
    int id;
    int salary;
    static int count;

public:
    Employee(int id1, int salary1 = 25000)
    {
        id = id1;
        salary = salary1;
        count++;
    }
    static void showCount()
    {
        cout << "Total Employees count is:-" << count <<"."<< endl;
    }
};
int Employee::count = 0;
void compareSalary(Employee e1, Employee e2)
{
    if (e1.salary > e2.salary)
    {
        cout << "Emplyee " << e1.id << " is rechir." << endl;
    }
    else
    {
        cout << "Emplyee " << e2.id << " is richir." << endl;
    }
}

int main()
{

    Employee e1(101, 50000);
    Employee e2(102);
    Employee::showCount();
    compareSalary(e1, e2);
    return 0;
}