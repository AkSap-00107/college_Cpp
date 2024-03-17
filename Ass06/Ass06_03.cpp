// 3.Create a class to print the area of a square and a rectangle. The class has two functions with the same name but different number of parameters. The function for printing the area of rectangle has two parameters which are its length and breadth respectively while the other function for printing the area of square has one parameter which is the side of the square.

#include <iostream>
using namespace std;
class Area{
    double side,l,b;
    public:
    // Area(){side=0,l=0,b=0}
    // Area(auto side1):side(side1){}
    // Area(auto l1,auto b2) :l(l1),b(b1){}
    auto SquareArea(auto side1){
        side=side1;
        cout<<"Area Of A Square : "<<side*side<<" usq."<<endl;
    }
    auto RectangleArea(auto l1,auto b1){
        l=l1,b=b1;
        cout<<"Area Of A Rectangle : "<<l*b<<" usq."<<endl;
    }
};
int main()
{
    Area A1;
    A1.SquareArea(33.34);
    A1.RectangleArea(33.34,56.74);
    return 0;
}
