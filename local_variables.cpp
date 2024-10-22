#include <iostream>
using namespace std;

void myFunction()
{
    //function code block
    //local variable declaration ad initialization.
    int locallvar = 30;
    const int age = 25; //constant local variable.
    cout << "myfuction local variable= "<< locallvar << endl;
}
int main()
{
    //Function code block 
    //local variable declaration and initialization. 
    int locallvar= 31;
    const int age = 19; //constant local variable.
    cout << "main local variable " << locallvar << endl;
    myFunction();
    return 0;
}