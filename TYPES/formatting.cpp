#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //Formatting output
    double a = 4.1247865;
    cout<< "Default format: " << a << endl;
    cout<< "Fixed format: " << fixed <<setprecision(3) << a << endl;
    return 0;
}