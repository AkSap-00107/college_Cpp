# include<iostream>
using namespace std;

class Employee{
    protected:
    string Name;
    int Id;
    double Salary;
    public:
    void getEmployee(string N,int I,double S){
        Name=N;
        Id=I;
        Salary=S;
    }
    void displayEmployee(){
        cout<<"Name : "<<Name<<endl;
        cout<<"ID : "<<Id<<endl;
        cout<<"Salary : "<<Salary<<endl;
    }
};
class Department : public Employee{
    protected:
    string Department;
    public:
    void getDepartment(string D){
        Department=D;
    }
    void displayDepartment(){
        cout<<"Department : "<<Department<<endl;
    }
};
class Information :public Department{
    public:
    void displayInfo(){
        displayEmployee();
        displayDepartment();
    }
};
class CSDepartment :public Information{
    public:
    string Skill ="Programming And Coding";
    void displaySkill()
    {
        cout<<"Skill : "<<Skill<<endl;
    }
};
int main()
{
    string N,D;
    int I;
    double S;
    cout <<"Enter Your Name :";
    getline(cin,N);
    cout<<"Enter Your Id And Salary :";
    cin>>I>>S;
    CSDepartment E1;
    E1.getEmployee(N,I,S);
    E1.getDepartment("CS");
    E1.displayInfo();
    E1.displaySkill();
    return 0;
}