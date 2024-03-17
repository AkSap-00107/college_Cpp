// The marks obtained by a student in 5 different subjects are input by the user. The student gets a division as per the following rules:
// Percentage above or equal to 60 - First division
// Percentage between 50 and 59 - Second division
// Percentage between 40 and 49 - Third division
#include <iostream>
using namespace std;

auto division(auto per)
{
    if(per>=60)
    return "First";
    else if (per>50 && per<60)
    return "Second";
    else if(per>40 && per<50)
    return "Third";
    else
    return "None";
}
int main()
{
    double per;
    cout<<"Enter Your percentage : ";
    cin>>per;
    if(division(per))
    cout<<"You Passed by "<<division(per)<<endl;
    else
    cout<<"Sorry ! We are unable to show."<<endl;
    return 0;
}