#include <iostream>
using namespace std;

class MyClass {
public:
    int value;

    // Default constructor
    MyClass() {
        cout << "Default constructor called." << endl;
        value = 0;
    }

    // Parameterized constructor
    MyClass(int v) {
        cout << "Parameterized constructor called with value " << v << "." << endl;
        value = v;
    }
};

int main() {
    MyClass obj1;
    MyClass obj2(10);
    cout << "obj1.value: " << obj1.value << endl;
    cout << "obj2.value: " << obj2.value << endl;
    return 0;
}
