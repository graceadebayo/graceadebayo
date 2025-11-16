#include <iostream>

using namespace std;

//pointers to objects

class Student{
    public:
    string name;
    string indexNumber;
    string dob;
    string gender;

    public :
    void addCourses(){
        cout << "Add courses here" << endl;
        cout << "My name is " << name << endl;
        cout << "My indexNumber is " << indexNumber << endl;
        cout << "My date of birth is " << dob << endl;
        cout << "My gender is " << gender << endl;

    }

    void changeLevel(){
        cout << "Change level here" << endl;
    }

    void payFees(){
        cout << "Pay fees here" << endl; 

    }
};

int main()
{
    //array     of objects
    Student students[10];
    for (int i = 0; i < 10; i++)
    {
        students[i].addCourses();
        students[i].changeLevel();
        students[i].payFees();
    }
    return 0;
}