#include <iostream>

using namespace std;

class Canteen{
    public:
    static string water;
    Canteen()
    {
        water = "Voltic";
        cout << "My favourite water is " << water << endl;

    };
 };
    string Canteen::water = "Voltic";
   
int main(){
    Canteen canteen;
    return 0;
}
