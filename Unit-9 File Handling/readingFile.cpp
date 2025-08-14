#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile("hello.txt");

    if (inFile.is_open()) {
        string x;
        while (getline(inFile, x)) {
            cout << "Read from file: " << x << endl;
        }

        inFile.close();
    } 
    else {
        cout << "Unable to open the file for reading." << endl;
    }

    return 0;
}
