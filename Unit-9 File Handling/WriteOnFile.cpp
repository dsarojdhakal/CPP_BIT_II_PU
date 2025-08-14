#include <iostream>
#include <fstream>

using namespace std;  
int main() {
    ofstream outFile("hello.txt");
    outFile.close();

    outFile.open("hello.txt");
    
    outFile << "Hello, File!"<<endl;
    outFile << "This is the first C++ file handling example.";

    outFile.close();

    cout << "File created, written, and closed successfully." << endl;

    return 0;
}
