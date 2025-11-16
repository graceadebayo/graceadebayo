#include <iostream>

using namespace std;

//destructors in polymorphic base class
class Animal {
public:
    virtual ~Animal() {
        cout << "Animal destructor called." << endl;
    }
};
//derived class Dog
class Dog : public Animal {
public:
    ~Dog() {
        cout << "Dog destructor called." << endl;
    }
};
//derived class Cat
class Cat : public Animal {
public:
    ~Cat() {
        cout << "Cat destructor called." << endl;
    }
}; 
int main() {
    //virtual destructor ensures proper cleanup
    Animal* animal1 = new Dog(); // base class pointer to derived class object
    Animal* animal2 = new Cat(); // base class pointer to another derived class object
    delete animal1; // properly calls Dog and Animal destructors
    delete animal2; // properly calls Cat and Animal destructors

    return 0;
}