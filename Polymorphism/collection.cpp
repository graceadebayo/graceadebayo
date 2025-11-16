#include <iostream>

using namespace std;

//collection of polymorphic objects
class Animal {
public:
    virtual void sound() {
        cout << "Animal class show function called." << endl;
    }
};
//derived class Dog
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};
//derived class Cat
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
}; 
int main() {
    //polymorphic collection collection of pointers
    Animal* animals[2];
    animals[0] = new Dog(); // base class pointer to derived class object
    animals[1] = new Cat(); // base class pointer to another derived class object
    for (int i = 0; i < 2; ++i) {
        animals[i]->sound(); // calls the appropriate derived class function
    }

    // free allocated memory
    for (int i = 0; i < 2; ++i) {
        delete animals[i];
    }

    return 0;
}