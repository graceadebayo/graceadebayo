#include <iostream>

using namespace std;

int main()
{
    //break Statement in a Loop
    for (int i = 1; i<=10;i++)
    {
        cout << "llteration:" <<i<< endl;
    
    if(i==9) 
    {
        cout << "Break at lteration" <<i<<endl;
        break;
    }
 }
 return 0;
}