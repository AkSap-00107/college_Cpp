// 2.Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'. The class has three constructors which are :
// 1 - having no parameter - values of both length and breadth are assigned zero.
// 2 - having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
// 3 - having one number as parameter - both length and breadth are assigned that number.
// Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.
# include<iostream>
using namespace std;

class Rectangle
{
    double l,b;
    public:
    Rectangle(){l=0,b=0;}
    Rectangle(auto side):l(side),b(side){}
    Rectangle(auto l1,auto b1) :l(l1),b(b1){}
    double Area();
    inline auto display(){
        cout<<"Area of a RECTANGLE is : "<<Area()<<" usq."<<endl;
    }

};
double Rectangle :: Area(){
    return l*b;
}
int main()
{
    Rectangle Rect1,Rect2(14.56),Rect3(12.43,56.89);
    Rect1.display();
    Rect2.display();
    Rect3.display();
    return 0;
}