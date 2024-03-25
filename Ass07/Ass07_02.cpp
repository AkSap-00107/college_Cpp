# include<iostream>
using namespace std;

class Information{
    string Name;
    int Roll_Num;
    string Course;
    double Fees;
    public:
    void getData(string n,int r,string c,int f)
    {
        Name=n;
        Roll_Num=r;
        Course=c;
        Fees=f;
    }
    string ReturnName(){
        return Name;
    }
     int ReturnRoll(){
        return Roll_Num;
    }   
     string ReturnCourse(){
        return Course;
    }
     int ReturnFees(){
        return Fees;
    }
};
class Student : public Information{
    public:
    void display(){
        cout<<"Name : "<<ReturnName()<<endl;
        cout<<"Roll No : "<<ReturnRoll()<<endl;
        cout<<"Course : "<<ReturnCourse()<<endl;
        cout<<"Fees : "<<ReturnFees()<<endl;
    }
};
int main()
{
    string n,c;
    int r,f;
    cout <<"Enter Your Name :";
    getline(cin,n);
    cout <<"Enter Your Course Name :";
    getline(cin,c);
    cout<<"Enter Your Roll No And Fees :";
    cin>>r>>f;
    Student S1;
    S1.getData(n,r,c,f);
    S1.display();
    return 0;
}