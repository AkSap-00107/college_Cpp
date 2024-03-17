// In a company an employee is paid as under:
// If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90% of basic salary.
// If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary.
// If the employee's salary is input by the user write a program to find his gross salary.  

# include<iostream>
using namespace std;
template<typename T,typename U,typename Y>
auto GrossSalary(T HRA,U DA,Y bSalary)
{
    if (bSalary >=1500)
        return HRA+(DA*bSalary)+bSalary;
    else
        return HRA*bSalary+DA*bSalary+bSalary;
}
int main()
{
    double BaseSalary;
    cout<<"Enater The Base Salary of Employee : "<<endl;
    cin>>BaseSalary;
    if (BaseSalary >=1500)
    {
        int HRA=500;
        double DA=0.98;
        cout<<"Your Gross Salary Is : "<<GrossSalary(HRA,DA,BaseSalary)<<endl;
    }
    else{
        double HRA=0.10;
        double DA=0.90;
        cout<<"Your Gross Salary Is : "<<GrossSalary(HRA,DA,BaseSalary)<<endl;
    }
    return 0;
}