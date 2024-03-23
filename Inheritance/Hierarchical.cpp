// Hierarchical Inheritance:
#include <iostream>
using namespace std;
// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived classes
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing." << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;
    dog.eat();
    dog.bark();
    cat.eat();
    cat.meow();
    return 0;
}
