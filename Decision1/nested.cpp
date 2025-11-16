#include <iostream>

using namespace std;

int main(){
    
    //if statement 
    int age = 17;
    if (age >= 18){
        cout << "You are of voting age." << endl;
        if(age <= 20){
            cout << "You are a young voter." << endl;

        }else{
            cout << "You are an experienced voter." << endl;
            
        }
    } else{
        cout << "You are not of voting age" << endl;
    }
    return 0;
}