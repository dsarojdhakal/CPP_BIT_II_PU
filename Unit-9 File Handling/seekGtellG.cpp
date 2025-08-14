#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream onFile("Hello.txt");
    onFile<<"Hello i am from Nepal.";
    onFile.close();

    ifstream inFile("Hello.txt");
    char str;
    cout<<inFile.tellg()<<endl;
    inFile.seekg(6,ios::beg);
    cout<<inFile.tellg()<<endl;
    while (!inFile.eof()){
        str = inFile.get();
        cout<<str;
    }    
    inFile.close();
    cout<<endl<<inFile.tellg()<<endl;
    return 0;    
}