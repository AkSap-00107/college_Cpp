// Write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred. Cost price and selling price of an item is input by the user.
# include<iostream>
using namespace std;
auto ProfitLossCount(auto costp,auto sellp,auto quant,auto &value)
{
    auto expense=quant*costp;
    auto earning=quant*sellp;
    if( expense< earning){
        value = earning-expense;
        return true;
    }
    else{
        value = expense-earning;
        return false;
    }
}
int main()
{
    double costp,sellp;
    int quant;
    double value;
    cout<<"Enter Qunatity Of Product : ";
    cin>>quant;
    cout<<"Enter Cost Price of Product : ";
    cin>>costp;
    cout<<"Enter Selling Price Of Product : ";
    cin>>sellp;

    if(ProfitLossCount(costp,sellp,quant,value))
        cout<<"You Have Booked PROFIT in this trade and PROFIT is "<<value<<endl;
    else
        cout<<"You Have Booked LOSS in this trade and LOSS is "<<value<<endl;
    return 0;
}