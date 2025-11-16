#include <iostream>

using namespace std;
//destructors and inheritance in C++ 
class Animal {
public:
virtual ~Animal() {
    cout << "Base destructor called" << endl;
}
};
class Dog : public Animal {
public:
~Dog() { 
    cout << "Derived destructor called" << endl;
}
};
int main() {
Dog dog1; // Derived class object
return 0;  
}