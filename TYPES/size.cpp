#include <iostream>
#include <climits>
#include <cfloat>


using namespace std;

int main() {
    // Size of different data types and limits
    cout << "Size of char: " << sizeof(char) << " byte(s)" << endl;
    cout << "Size of int: " << sizeof(int) << " byte(s)" << endl;
    cout << "Size of float: " << sizeof(float) << " byte(s)" <<endl;
    cout << "Size of double: " << sizeof(double) << " byte(s)" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte(s)" <<   endl;   
    cout<<"The limit of char is from " << static_cast<int>(CHAR_MIN) << " to " << static_cast<int>(CHAR_MAX) << endl;
    cout<<"The limit of int is from " << INT_MIN << " to " << INT_MAX << endl;
    cout<<"The limit of float is from " << FLT_MIN << " to " << FLT_MAX << endl;
    cout<<"The limit of double is from " << DBL_MIN << " to " << DBL_MAX << endl;   

    //Overflow example
    int maxInt = INT_MAX;
    int overflowedInt = maxInt + 1;
    cout << "Overflowed int value (maxInt + 1): " << overflowedInt << endl;
    return 0;
}