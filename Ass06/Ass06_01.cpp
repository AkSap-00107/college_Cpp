// 1.Write a program to print the names of students by creating a Student class. If no name is passed while creating an object of the Student class, then the name should be "Unknown", otherwise the name should be equal to the String value passed while creating the object of the Student class.
# include<iostream>
using namespace std;

class Student{
    string name;
    public:
    Student(){
        name="Unknown";
    }
    // Student(auto name1="Unknown"){// default parameter not working
    Student(auto name1) :name(name1){}
    auto display(){
        cout<<"Welcome "<<name<<"!"<<endl;
    }
};
int main()
{
    string name;
    cout<<"Enter Your Name : "<<endl;
    cin>>name;
    Student S1(name);
    Student S2;
    S1.display();
    S2.display();
    return 0;
}