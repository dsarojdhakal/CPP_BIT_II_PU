#include <iostream>
#include <fstream>

using namespace std;  
int main() {
    ofstream outFile("hello.txt");
    outFile.close();

    outFile.open("hello.txt");

    if (outFile.is_open()) {
        outFile << "Hello, File!\n";
        outFile << "This is the first C++ file handling example.";

        outFile.close();

        cout << "File created, written, and closed successfully." << endl;
    } else {
        cerr << "Unable to open the file." << endl;
    }

    return 0;
}