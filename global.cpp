#include <iostream>
using namespace std;

//global variable declaration and initialization
int globalvar = 30;
const int age = 19; // constant global variable 
//value will not change 
void myFunction()
{
    //function code block 
    cout << "Global Variable: " << globalvar << endl;
    cout << "Constant Global Variable: " << age << endl;
}
int main()
{
    cout << age << endl;
    //function code block
    return 0;
}