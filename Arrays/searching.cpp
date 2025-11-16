#include <iostream>

using namespace std;

int searchInArray(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

int main()
{
    // searching in arrays
    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int target = 110;
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int result = searchInArray(numbers, size, target);
    if (result != -1)
    {
        cout << "Element " << target << " found at index: " << result << endl;
    }
    else
    {
        cout << "Element " << target << " not found in the array." << endl;
    }
    return 0;
}
