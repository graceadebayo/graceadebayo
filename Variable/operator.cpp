#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int b =3;

    // Arithemtic Operators
    cout << "Arithemtic Operators:" << endl;
    cout << "a + b = " << (a+b) << endl;
    cout << "a - b = " << (a-b) << endl;
    cout << "a * b = " << (a*b) << endl;
    cout << "a / b = " << (a/b) << endl;
    cout << "a % b = " << (a%b) << endl;

    // Comparison Operators
    cout << "\nComparison Operators:" << endl;
    cout << "a == b:| " << (a==b) << endl;
    cout << "a != b:| " << (a!=b) << endl;
    cout << "a > b: " << (a>b) << endl;
    cout << "a < b: " << (a<b) << endl;
    cout << "a >= b:  " << (a>=b) << endl;
    cout << "a <= b: " << (a<=b) << endl;

    // Logical Operators
    bool x = true;
    bool y = false;
    cout << "\nLogical Operators:" << endl;
    cout << "x && y " << (x && y) << endl;
    cout << "x || y " << (x || y) << endl;
    cout << "!x " << (!x ) << endl;

    // Increment and Decrement Operators
    cout << "nIncrement and Decrement Operators:" << endl;
    cout << "a before increment: " << a << endl;
    cout << "++a: " << (++a) << endl;
    cout << "a after increment: " << a << endl;
    cout << "b before decrement: " << b << endl;
    cout << "--b: " << (--b) << endl;
    cout << "b after decrement: " << a << endl;

    return 0;
}