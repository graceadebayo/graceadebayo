#include <iostream>

using namespace std;

class Staff{
    private:
    int height;
    public:
    
    Staff(int h)
    {
        height = h;
        cout << "My height is " << height << "ft" << endl;
    }
        //destructor
        ~Staff(){
            cout <<"Destructor called" << endl;
        }
};

int main(){
    Staff staff1(5);
    return 0;
}