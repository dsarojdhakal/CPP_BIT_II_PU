#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream readFile;
    char str;
    readFile.open("MyFile.txt");
    readFile<<"Hello World \nHow are you?\n";
    readFile.close();

    ifstream writeFile;
    writeFile.open("MyFile.txt",ios::in);
    while(!writeFile.eof()){
        str = writeFile.get();
        cout<<str;
    }
    writeFile.close();
    return 0;
}