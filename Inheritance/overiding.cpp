#include <iostream>

using namespace std;
//overriding methods in C++
class Animal {
public:
virtual void makeSound() {
    cout << "General Animal sound" << endl;
}
};
class Dog : public Animal {
public:
 void makeSound() override{
    cout << "Dogs make sound" << endl;
}
};
int main() {
Animal* animalPtr;
Dog dog1;
animalPtr = &dog1; // Upcasting: Derived to Base
animalPtr->makeSound(); // Calls Derived class method due to overriding
return 0;  
}