#include <iostream>

using namespace std;

int main() { 
    // Random number generation example
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator  
    int randomValue = rand(); // Generate a random number
    cout << "Random value: " << randomValue << endl;
    return 0;
}