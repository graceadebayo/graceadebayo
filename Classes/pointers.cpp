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

int main(){
    //poointers to objects
    Student myStudent;
    Student *ptr = &myStudent;
    ptr->name = "Francis Osabutey";
    ptr->indexNumber = "0001";
    ptr->dob = "2005-11-09";
    ptr->gender = "Male";
    ptr->addCourses();
    ptr->changeLevel();
    ptr->payFees();
    return 0;
    
}