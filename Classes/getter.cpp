#include <iostream>

using namespace std;

class Car{
    private:
    string color;
    int speed;
    string brand;
    string model;
    int year;

    public:
    void setColor(string c)\
    {
        color = c;

    }

    string getColor(){
        return color;
    }

    void display(){
        cout << "The color of my car is " << color << endl;
    }


};

int main(){
    //Getters and Setters
    Car car1;
    car1.setColor("wine");
    car1.getColor();
    car1.display();
    return 0;
}