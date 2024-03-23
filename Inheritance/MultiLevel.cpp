// MultiLevel inheritance
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class (inherits from Animal)
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Derived class (inherits from Dog)
class Labrador : public Dog {
public:
    void color() {
        cout << "Labrador is brown in color." << endl;
    }
};

int main() {
    Labrador lab;
    lab.eat();
    lab.bark();
    lab.color(); 
    return 0;
}
