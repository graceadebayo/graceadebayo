#include <iostream>

using namespace std;

int main()
{
    // continue Statement in a for Loop
    for (int i = 1; i <= 10; i++)
    {

        if (i % 2 == 0)
        {

            continue;
        }
        cout << "Iteration: " << i << endl;
    }
    return 0;
}