#include <iostream>

using namespace std;
// function with void return type and no parameters
void displayMessage()
{
    cout << "This is a message from displayMessage function." << endl;
}
// function with a return type
int addNumbers(int a, int b)
{
    cout << "Adding numbers: " << a << " + " << b << endl;
    return a + b;
}
// function with parameters
void printSum(int sum)
{
    cout << "The sum is: " << sum << endl;
}

double multiply(double x, double y)
{
    return x * y;
}

// default parameter values
void showInfo(int age = 18)
{
    cout << "My Age: " << age << endl;
}

int main()
{
    displayMessage();
    int result = addNumbers(5, 10);
    cout << "Result from addNumbers: " << result << endl;
    printSum(result);
    double product = multiply(4.5, 2.0);
    cout << "The product is: " << product << endl;
    showInfo();   // uses default age
    showInfo(25); // uses provided age

    return 0;
}