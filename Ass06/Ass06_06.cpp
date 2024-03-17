// 6.Write a C++ Program to show Example of Default copy constructor
# include<iostream>
using namespace std;

class Sample{
    int value;
    public:
    Sample(auto val):value(val){}
    auto getValue()const{
        return value;
    }
};
int main()
{
    Sample S1(99);
    Sample S2=S1;
    cout<<"Value For S1 : "<<S1.getValue()<<endl;
    cout<<"Value For S2 : "<<S2.getValue()<<endl;
    return 0;
}