#include <iostream>

using namespace std;

int main()
{
    // size_t example
    int numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    size_t arraySize = sizeof(numbers) / sizeof(numbers[0]);
    for (size_t i = 0; i < arraySize; i++)
    {
        cout << "numbers[" << i << "]: " << numbers[i] << endl;
    }
    return 0;
}   