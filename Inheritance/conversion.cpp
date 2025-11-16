#include <iostream>

using namespace std;
//conversion between base and derived classes in C++    
class Animal {
public:
void makeSound() {
    cout << "General Animal sound" << endl;
}
};
class Dog : public Animal {
public:
void makeSound() {
    cout << "Dogs make sound" << endl;
}
};
int main() {
Animal* animalPtr;
Dog dog1;
animalPtr = &dog1; // Upcasting: Derived to Base
animalPtr->makeSound(); // Calls Base class method
return 0;  
}