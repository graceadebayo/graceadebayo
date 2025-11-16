#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // sorting an array
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    cout << "Original array: " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nAfter sorting: " << endl;
    sort(arr, arr + 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    // sorting in descending order
    cout << "\nSorting in descending order: " << endl;
    sort(arr, arr + 7, greater<int>());
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}