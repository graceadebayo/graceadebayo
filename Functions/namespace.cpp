#include <iostream>

using namespace std;

//namespace example
namespace first 
{
    void display()
    {
        cout << "Inside first namespace" << endl;
    }
}
    namespace second 
    {
        void display() 
        {
            cout << "Inside second namespace" << endl;
        }
    }
    int main()
    {
        first::display();
        second::display();
        return 0;
    }
