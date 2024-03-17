// If the ages of Ram, Sulabh and Ajay are input by the user, write a program to determine the youngest of the three.  
# include<iostream>
using namespace std;
auto YoungOne(auto a,auto b,auto c)
{
    if(a<b)
    {
        if(a<c)
            return "Ram";
        else if (c<b)
            return "Aajy";
    }
    else if (b<c)
        return "Sulabh";
    else
        return "Aajy";
}
int main()
{
    int RamAge,SulabhAge,AjayAge;
    cout<<"Enater Ages of Ram ,Sulabh and Ajay respectively : "<<endl;
    cin>>RamAge>>SulabhAge>>AjayAge;
    cout<<"The Young Age is of "<<YoungOne(RamAge,SulabhAge,AjayAge)<<endl;
    return 0;
}