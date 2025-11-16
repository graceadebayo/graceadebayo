#include <iostream>

using namespace std;

int main()
{
    // array size using sizeof operator
    int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    bool flags[10] = {true, false, true, false, true, false, true, false, true, false};
    string words[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    double values[10] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
    float floatValues[10] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 10.10f};
    char letters[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

     cout << "Size of numbers array: " << sizeof(numbers) << endl;
    cout << "Size of flags array: " << sizeof(flags) << endl;
    cout << "Size of words array: " << sizeof(words) << endl;
    cout << "Size of values array: " << sizeof(values) << endl;
    cout << "Size of floatValues array: " << sizeof(floatValues) << endl;
    cout << "Size of letters array: " << sizeof(letters) << endl;

    return 0;
}