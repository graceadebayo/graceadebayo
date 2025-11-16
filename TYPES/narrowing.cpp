#include <iostream>

using namespace std;

int main() {
    //Narrowing conversion example
    double largeValue = 123456789.987654321;
    
    // Implicit narrowing conversion from double to float
    float narrowedValue = largeValue; 
    int narrowedIntValue = largeValue; 
    cout << "Original double value: " << largeValue << endl;
    cout << "Narrowed float value: " << narrowedValue << endl;
    cout << "Narrowed int value: " << narrowedIntValue << endl;

    // Demonstrating potential loss of precision
    if (largeValue != static_cast<double>(narrowedValue)) {
        cout << "Warning: Precision loss occurred during narrowing conversion!" << endl;
    } else {
        cout << "No precision loss occurred." << endl;
    }

    return 0;
}