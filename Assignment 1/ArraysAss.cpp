#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    //1D Arrays
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //searching for 7
    for (int i = 0; i < 10; i++)
    if(arr[i] == 7)
    cout << "Found 7 at index " << i << endl;
    //sorting in descending order
    sort(arr, arr + 10, greater<int>());
    
    //print array
    for (int i = 0; i < 10; i++)
    cout << arr[i] << " ";
    return 0;
}