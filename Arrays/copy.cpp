#include <iostream>

using namespace std;

int main()
{
    // copying arrays
    int sourceArray[] = {1, 2, 3, 4, 5};
    int destinationArray[5];
    for (int i = 0; i < 5; i++)
    {
        destinationArray[i] = sourceArray[i];
    }
    cout << "Elements in sourceArray: ";
    for (int i = 0; i < 5; i++)
    {
        cout << sourceArray[i] << " ";
    }
    cout << endl;
    cout << "Elements in destinationArray: ";
    for (int i = 0; i < 5; i++)
    {
        cout << destinationArray[i] << " ";
    }

    return 0;
}