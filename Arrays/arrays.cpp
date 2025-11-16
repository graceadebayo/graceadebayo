#include <iostream>

using namespace std;

int main()
{
    // arrays
    // array declaration
    int numbers[5];
    bool activeStudents[5];
    string names[5];
    double doubleNumbers[5];
    float floatNumbers[5];
    char characters[5];

    // array initialization
    int scores[5] = {90, 80, 70, 60, 50};
    bool flags[5] = {true, false, true, false, true};
    string fruits[5] = {"Apple", "Banana", "Cherry", "Date", "Elderberry"};
    double measurements[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float temperatures[5] = {98.6f, 99.5f, 100.4f, 101.3f, 102.2f};
    char vowels[5] = {'A', 'E', 'I', 'O', 'U'};

    for (int i = 0; i < 5; i++)
    {
        cout << "scores[" << i << "]: " << scores[i] << endl;
        cout << "flags[" << i << "]: " << flags[i] << endl;
        cout << "fruits[" << i << "]: " << fruits[i] << endl;
        cout << "measurements[" << i << "]: " << measurements[i] << endl;
        cout << "temperatures[" << i << "]: " << temperatures[i] << endl;
        cout << "vowels[" << i << "]: " << vowels[i] << endl;
        cout << "------------------------" << endl;
    }
    return 0;
}