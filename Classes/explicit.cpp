#include <iostream>

using namespace std;

class Staff{
    private:
    int height;
    public:
    //explicit keyword
    explicit Staff(int h)
    {
        height = h;
        cout << "My height is " << height << endl;


    }
};

int main(){
    Staff staff1(6);
    return 0;
}