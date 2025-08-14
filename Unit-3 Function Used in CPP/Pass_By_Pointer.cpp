//Program Example for pass by Pointer.

#include<iostream>
using namespace std;

void myfunc(int *a, int *b){
    *a = *a+3;
    *b = *b-4;
}

int main(){
    int a=20,b=10;
    
    cout<<"Values before calling the functin."<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    myfunc(&a,&b);

    cout<<"Values before calling the functin."<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;
}
