#include<iostream>
using namespace std;

int myFunc(int x, int y){
     int a = x;
     int b = y;
     return a+b;
}

int main(){
    int a = myFunc(3, 4+5);
    cout<<endl<<a<<endl;
    return 0;
}