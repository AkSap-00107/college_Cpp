// Multiple Inheritance:
#include <iostream>
using namespace std;
// Base classes
class Base1 {
public:
    void display1() {
        cout << "Base1 display." << endl;
    }
};

class Base2 {
public:
    void display2() {
        cout << "Base2 display." << endl;
    }
};

// Derived class
class Derived : public Base1, public Base2 {
public:
    void display() {
        cout << "Derived display." << endl;
    }
};

int main() {
    Derived obj;
    obj.display1();
    obj.display2();
    obj.display(); 
    return 0;
}
