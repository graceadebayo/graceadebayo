#include <iostream>

using namespace std;

//class definition
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
    //creating objects of a class
    Student student1;
    Student student2;
    Student student3;
    Student student4;
    student1.indexNumber = "0001";
    student1.name = "Francis Osabutey";
    student1.gender = "Male";
    student1.dob = "2005-11-09";
    student1.addCourses();
    student1.changeLevel();
    student1.payFees();

    student2.name = "Grace Adebayo";
    student2.gender = "Female";
    student2.indexNumber = "0002";
    student2.dob = "1957-11-09";
    student2.addCourses();
    student2.changeLevel();
    student2.payFees();
    return 0;

    
}