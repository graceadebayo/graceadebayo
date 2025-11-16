#include <iostream>

using namespace std;
//constructors and inheritance in C++ 
class Animal {
public:
Animal() {
    cout << "Base constructor called" << endl;
}
};
class Dog : public Animal {
public:
Dog() {
    cout << "Derived constructor called" << endl;
}
};
int main() {
Dog dog1; // Derived class object
return 0;  
}