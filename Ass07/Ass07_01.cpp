# include<iostream>
using namespace std;

class BaseClass
{
    int num;
    public:
    BaseClass():num(123){};
    int ReturnNum(){
        return num;
    }
};
class DerivedClass:private BaseClass
{
    public:
    void display(){
        cout<<"Num is :"<<ReturnNum()<<endl;
    }
};
int main()
{
    DerivedClass Obj1;
    Obj1.display();
    return 0;
}