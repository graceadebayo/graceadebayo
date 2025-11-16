#include <iostream>

using namespace std;

bool areArraysEqual(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // comparing arrays
    int array1[] = {1, 4, 3, 2, 5};
    int array2[] = {1, 2, 3, 4, 5};
    int size = 5;
    cout << (areArraysEqual(array1, array2, size) ? "They are equal" : "They are not equal") << endl;

    return 0;
}