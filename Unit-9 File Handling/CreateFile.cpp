#include <iostream>
#include <fstream>

using namespace std;  
int main() {
    ofstream outFile("C:\\Users\\sarojDhakal\\OneDrive\\hello.txt");
    //If you want to create a file in the same directory
    //then no need to specify the address of the file directory.

    //just write ==>  
    //ofstream Outfile("hello.txt");

    return 0;
}