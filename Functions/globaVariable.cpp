#include <iostream>

using namespace std;
//global variable
int globalVariable = 20;

//byvalue
void byValue(int i)
{
 cout << "inside byValue; " << i << endl;
 //local variable 
}

//byreference

void byReference(int &x)
{
    x = 10;
    cout << "Inside byReference, x; " <<  x << endl;
    globalVariable = 30;
}
int main(){
    int a = 5.5;
    int b = 2.5;
    cout << "a + b = " << a + b << endl;

    globalVariable = 30;
    int x = 5;
    cout << "Before byValue, x; " <<  x << endl;
    byValue(x);
    cout << "After byValue, x; " <<  x << endl;
    cout << "Before byReference, x; " <<  x << endl;
    byReference(x);
    cout << "Afetr byReference, x; " <<  x << endl;
    return 0;
}
