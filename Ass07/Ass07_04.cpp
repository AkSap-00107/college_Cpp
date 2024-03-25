# include<iostream>
using namespace std;

class Student{
    protected:
    string Name;
    int Roll_Num;
    public:
    void getStudent(string N,int R){
        Name=N;
        Roll_Num=R;
    }
    void displayStudent(){
        cout<<"Name : "<<Name<<endl;
        cout<<"Roll No : "<<Roll_Num<<endl;
    }
};
class Marks{
    protected:
    double sub1,sub2,sub3;
    public:
    void getMarks(double s1,double s2,double s3){
        sub1=s1;
        sub2=s2;
        sub3=s3;
    }
    void displayMarks(){
        cout<<"Subject1 : "<<sub1<<endl;
        cout<<"Subject2 : "<<sub2<<endl;
        cout<<"Subject3 : "<<sub3<<endl;
    }
};
class Result:public Student,public Marks{
    protected:
    double total;
    double percentage;
    public:
    void displayResult(){
        total=sub1+sub2+sub3;
        percentage=(total/300)*100;
        displayStudent();
        displayMarks();
        cout<<"Total Marks : "<<total<<endl;
        cout<<"Percentage : "<<percentage<<endl;
    }
};
int main()
{
    string N;
    int R;
    double s1,s2,s3;
    cout <<"Enter Your Name :";
    getline(cin,N);
    cout<<"Enter Your Roll No :";
    cin>>R;
    cout<<"sub1 sub2 and Sub3 Marks :";
    cin>>s1>>s2>>s3;
    Result R1;
    R1.getStudent(N,R);
    R1.getMarks(s1,s2,s3);
    R1.displayResult();
    return 0;
}