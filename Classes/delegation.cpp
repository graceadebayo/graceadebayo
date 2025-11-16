#include <iostream>

using namespace std;

class Staff{
    private:
    int height;
    public:
    
    Staff(int h)
    {
        height = h;
        cout << "My height is " << height << endl;
    }
        //delegation
        Staff():Staff(5){};
};

int main(){
    Staff staff1;
    return 0;
}