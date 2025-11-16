#include <iostream>

using namespace std;

//function overloading
void print (int i)
{
 cout << "Displaying integer; " << i << endl; 
}
void print (double f)
{
     cout << "Displaying float; " << f << endl; 
}
void print (string s)
{
     cout << "Displaying string; " << s << endl; 
}
int main()
{
print (10); // calls print(int)
print (10.5); // calls print(int)
print ("Hello"); // calls print(int)
return 0;
}