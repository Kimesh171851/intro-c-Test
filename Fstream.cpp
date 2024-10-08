#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    /*writing to a file. output.txt file will be created in the directory of this source file*/
    ofstream outFile("output.txt");
    outFile << "writing to a file ." << endl;
    outFile.close();

    //Reading fron a file
    ifstream inFile("output.txt");
    string content;
    while(getline(inFile, content))
    {
        cout << content << endl;
    }
    inFile.close(); //close the file after reading its contents

    return 0;
}