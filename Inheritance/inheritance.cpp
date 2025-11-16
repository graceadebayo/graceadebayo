#include <iostream>

using namespace std;
//inheritance in C++    
class Animal {
public:
void makeSound() {
    cout << "General Animal sound" << endl;
}
};
class Dog : public Animal {
public:
void eat() {
    cout << "Dogs eat food" << endl;
}
};
int main() {
Dog dog1;
dog1.makeSound(); // Inherited from Animal class
dog1.eat();       // Defined in Dog class
Animal animal1;
animal1.makeSound(); // Calls Animal class method
return 0;  
}