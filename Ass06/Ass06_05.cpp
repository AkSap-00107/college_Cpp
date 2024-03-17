// 5.Write a C++ Program to show Example of Default copy constructor
# include<iostream>
using namespace std;
class Sample{
    int value;
    public:
    Sample(){}
    Sample(auto val):value(val){cout<<"Constructor called"<<endl;}// default Copy constructor
    // Sample(auto & obj):value(obj.value){} //Copy constructor 
    auto display()const{
        cout<<"Value = "<<value<<endl;
    }
    // auto get() const{
    //     return value;
    // }
};
int main()
{
    Sample S1(10),S2=S1;
    S1.display();
    S2.display();
    return 0;
}