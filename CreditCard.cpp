/////////////////////////Using Luhn's Algorithms Of Credit Card Number..
/////Luhn's algorithm. Luhn's algorithm determines whether or not a credit card number is valid.
#include <iostream>
using namespace std;
bool Validator(string num);
int GetDigit(int num)
{
    return num%10 +(num/10%10);
}
int SecondDigitCalculation(string num)
{
    int sum=0;
    for (int i = num.size()-2; i>=0; i-=2)
        sum+=GetDigit((num[i]-'0')*2);
        return sum;
}
int CalculateOddDigit(string num)
{
    int sum=0;
    for (int i = num.size()-1; i>=0; i-=2)
    sum+=num[i]-'0';
    return sum;
}
int main()
{
    string num;
    cout << "Enter Your Credit Card Number:";
    cin >> num;
    if(Validator(num))
    cout<<"\n The Number Is Valid!";
    else 
    cout<<"\n The Number Is InValid!";
    return 0;
}

bool Validator(string num)
{
    if((SecondDigitCalculation(num)+CalculateOddDigit(num))%10 == 0)
    return true;
    return false;
}