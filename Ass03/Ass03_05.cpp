//  Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered by the user. A triangle is valid if the sum of all the three angles is equal to 180 degrees.
# include<iostream>
using namespace std;
auto IsTriangle(auto a,auto b,auto c)
{
    if (a+b+c == 180)
        return "A Triangle";
    else
        return "Not A Triangle"; 
}
int main()
{
    double a,b,c;
    cout<<"Enter Respective Angels Of A triangle in degrees: "<<endl;
    cin>>a>>b>>c;
    cout<<"Respective Angles form "<<IsTriangle(a,b,c)<<endl;
    return 0;
}