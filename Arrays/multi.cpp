#include <iostream>

using namespace std;

int main(){
    //multi-dimensional arrays
    int multiArray[3][2] = { {1, 2},
                           {3, 4},
                           {5, 6},
                            };
    cout << "Multi-dimensional array element; " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << multiArray[i][j] << "";
        }
        cout << endl;
    }            

    return 0;
}
