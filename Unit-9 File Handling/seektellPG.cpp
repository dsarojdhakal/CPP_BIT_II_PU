#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream onFile("Hello.txt");
    cout<<onFile.tellp()<<endl;

    onFile<<"Hello Ram";
    cout<<onFile.tellp()<<endl;

    onFile.seekp(-3, ios::end);
    cout<<onFile.tellp()<<endl;
    onFile<<"Shyam"<<endl;
    cout<<onFile.tellp()<<endl;

    onFile.close();

    ifstream inFile("Hello.txt");
    char str;
    while (!inFile.eof())
    {
        str = inFile.get();
        cout<<str;
    }
    inFile.close();

    inFile.open("Hello.txt");
    string line;
    while (!inFile.eof())
    {
        getline(inFile, line);
        cout<<line;
    }
    inFile.close();
    return 0;    
}