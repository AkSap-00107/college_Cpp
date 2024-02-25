#include <iostream>
using namespace std;

class Employee
{
    int empId;
    string empName;
    int baseSalary;
    const int HRA = 30;
    const int DA = 12;
    int grossSalary;

public:
    Employee() {}
    Employee(int Id, string Name, int bSalary)
    {
        empId = Id;
        empName = Name;
        baseSalary = bSalary;
    }
    int calculateGrossSalary()
    {
        return baseSalary * HRA / 100 + baseSalary * DA / 100 + baseSalary;
    }
    void display()
    {
        cout << "empId=" << empId << endl;
        cout << "empName=" << empName << endl;
        cout << "baseSalary=" << baseSalary << endl;
        cout << "GrossSalary=" << calculateGrossSalary() << endl;
    }

    Employee& operator=(const Employee& other) {
        empId = other.empId;
        empName = other.empName;
        baseSalary = other.baseSalary;
        return *this;
    }
};

int main()
{
    int empId;
    string empName;
    int baseSalary;
    Employee E[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter Employee Details With Base Salary:" << endl;
        cin >> empId >> empName >> baseSalary;
        E[i] = Employee(empId, empName, baseSalary);
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "***************************************\n";
        E[i].display();
    }
    return 0;
}
