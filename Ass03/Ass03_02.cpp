// Write a program to calculate the total expenses. Quantity and price per item are input by the user and discount of 10% is offered if the expense is more than 5000.  

# include<iostream>
using namespace std;
auto ToatalExpenseWithoutDiscount(auto &sum,auto quant,auto price)
{
    return sum+=(quant*price);
}
auto ToatalExpenseWithDiscount(auto sum){
    if(sum > 5000){
        return sum-(sum*10/100);
    }
    else
    return sum;
}
int main()
{

    int i=1,n;
    auto sum=0;
    int Quant;
    double price;
    cout<<"Enter No OF Different Products Purchased:"<<endl;
    cin>>n;
    while (i<=n)
    {
        cout<<"Enter Quantity For "<<i<<"th product :";
        cin>>Quant;
        cout<<"Enter Price For the "<<i<<"th Product :";
        cin>>price;
        ToatalExpenseWithoutDiscount(sum,Quant,price);
        i++;
    }
    cout<<"Your Toatal Expense in the purchase is : "<<ToatalExpenseWithDiscount(sum)<<endl;
    return 0;
}