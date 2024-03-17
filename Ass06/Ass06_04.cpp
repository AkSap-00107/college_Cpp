// 4.Write a C++ Program to calculate Volume of Cube using constructor and destructor
# include<iostream>
using namespace std;

class CubeVolume{
    double side,volume;
    public:
    CubeVolume(){}
    CubeVolume(auto side1):side(side1){
        cout<<"Cube has been created."<<endl;
    }
    ~CubeVolume(){
        cout<<"Cube has been destroyed."<<endl;
    }
    inline auto Volume(){
        return side*side*side;
    }
};
int main()
{
    CubeVolume cube1(3.33),cube2(0);
    cout<<"Volume Of Cube Is : "<<cube1.Volume()<<" cu."<<endl;
    cout<<"Volume Of Cube Is : "<<cube2.Volume()<<" cu."<<endl;
    return 0;
}