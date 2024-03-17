// Write a program to calculate the monthly telephone bills as per the following rule:
// Minimum Rs. 200 for upto 100 calls.
// Plus Rs. 0.60 per call for next 50 calls.
// Plus Rs. 0.50 per call for next 50 calls.
// Plus Rs. 0.40 per call for any call beyond 200 calls. 
#include <iostream>
using namespace std;
auto CalcBill(auto calls)
{
    if (!(calls<= 0))
    {
        if (calls <= 100)
            return 200.00;
        else if (calls > 100 && calls <= 150)
            return (200 + (calls - 100) * 0.60);
        else if (calls > 150 && calls <= 200)
            return (200 + 50 * 0.60 + 0.50 * (calls - 150));
        else
            return (200 + 50 * 0.60 + 0.50 * 50 + 0.40 * (calls - 200));
    }
}
int main()
{
    int calls;
    cout<<"Enter Your Calls Count For this Month : "<<endl;
    cin>>calls;
    cout<<"Your Telephone Bill : "<<CalcBill(calls)<<endl;
    return 0;
}