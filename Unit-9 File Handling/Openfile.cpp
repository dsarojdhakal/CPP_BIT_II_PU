#include <iostream>
#include <fstream>

using namespace std;  
int main() {
    ofstream outFile;
    outFile.open("Hello.txt");
    outFile<<"My name is ram";
    cout<<"\n\nWritten on file.....\n\n";
    outFile.close();
    return 0;
}