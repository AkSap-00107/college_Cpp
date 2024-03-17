# include<iostream>
using namespace std;
template <typename T,typename Y,typename U>
auto sum(T a,Y b, U c)
{
    return a+b+c;
}
auto sum1(auto a,auto b, auto c)
{
    return a+b+c;
}
template <typename T>
auto max(T a,T d){
    return (a>d?a:d);
}
int main()
{
    int a=4;
    int f=2;
    double b=1.3;
    double e=23.33;
    char c='A';
    auto d{"tnu"};
    auto k=max<double>(b,e);
    cout<<k<<endl;// explicite convert into possible 
    cout<<sum(a,b,c)<<endl;
    cout<<sum1(a,b,c)<<endl;
    return 0;
}