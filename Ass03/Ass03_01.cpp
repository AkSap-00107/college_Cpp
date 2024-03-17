// Take any integer input by the user. Write a program to find out whether it is an odd number or even number.  
# include<iostream>
using namespace std;
bool OddEven(int num){
    if (num%2==0)
    return true;
    return false;
    // (num%2 == 0)?return true:return false;// why throughing an error
}
int main()
{
    int num;
    cout<<"Enter Value For Num: "<<endl;
    cin>>num;
    if(OddEven(num))
    cout<<num<<" is Even Number."<<endl;
    else
    cout<<num<<" is Odd Number."<<endl;
    return 0;
}