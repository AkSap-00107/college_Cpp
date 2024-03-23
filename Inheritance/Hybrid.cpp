// Hybrid Inheritance (combination of different types of inheritance)
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Base class
class Pet {
public:
    void play() {
        cout << "Pet is playing." << endl;
    }
};

// Derived class (inherits from Animal and Pet)
class Dog : public Animal, public Pet {
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
    lab.play();
    lab.bark(); 
    lab.color(); 
    return 0;
}

