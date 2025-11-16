#include <iostream>

using namespace std;

//polymorphism base class
class Animal {
public:
    virtual void show() {
        cout << "Animal class show function called." << endl;
    }
};
//derived class Dog
class Dog : public Animal {
public:
    void show() override {
        cout << "Dog barks." << endl;
    }
};
//derived class Cat
class Cat : public Animal {
public:
    void show() override {
        cout << "Cat meows." << endl;
    }
}; 
int main() {
    Animal* animal = new Dog(); // base class pointer to derived class object
    Animal* animal2 = new Cat(); // base class pointer to another derived class object

    animal->show();  // Outputs: Dog barks.
    animal2->show(); // Outputs: Cat meows.

    delete animal; // free allocated memory
    delete animal2; // free allocated memory

    return 0;
}