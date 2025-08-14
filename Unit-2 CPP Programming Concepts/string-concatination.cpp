#include<iostream>

using namespace std;

string myFunc(string a, string b){
    return (a + b);
}

int main(){
    string myString = myFunc("Hello ","World");
    cout<<myString;
    return 0;
}