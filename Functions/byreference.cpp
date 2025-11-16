#include <iostream>

using namespace std;

//byvalue
void byValue(int x){
    x = 10;
    cout << "Inside byValue, x; " <<  x << endl;
}
//byreference
void byReference(int &x)
{
    x = 10;
    cout << "Inside byReference, x; " <<  x << endl;
}
int main(){
int x = 5;
cout << "Before byValue, x; " <<  x << endl;
byValue(x);
cout << "After byValue, x; " <<  x << endl;
cout << "Before byReference, x; " <<  x << endl;
byReference(x);
cout << "Afetr byReference, x; " <<  x << endl;
return 0;
}