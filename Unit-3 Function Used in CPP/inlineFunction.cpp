#include<iostream>
using namespace std;
int a,b;

inline void add(){
    cout<<"Enters teo numbers";
    cin>>a>>b;
    int c = a+b;
    cout<<"Sum = "<<c<<endl;
}

int main(){
    add();
    return 0;
}