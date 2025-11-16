#include <iostream>

using namespace std;

class Car{
    private:
    string Color;
    int Speed;
    string Brand;
    string Model;
    int Year;

    public:
    Car(string color, int speed, string brand, string model, int year){
        Color = color;
        Speed = speed;
        Brand = brand;
        Model = model;
        Year = year;
        display();

    }

    void display()
    {

    cout << "The Color of my car is " << Color << endl;
    cout << "The Speed of my car is " << Speed << endl;
    cout << "The Brand of my car is " << Brand << endl;
    cout << "The Model of my car is " << Model << endl;
    cout << "The Year of my car is " << Year << endl;
    }


};

int main(){
    //Constructors
    Car("Wine", 120, "Toyota", "Corolla", 2025);
     return 0;
}