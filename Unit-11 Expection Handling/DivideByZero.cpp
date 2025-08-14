#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    try
    {
        cout<<"Enter the value of a and b : ";
        cin>>a>>b;
        c = a / b;
        cout<<"Result of a divide by b : "<<c;
    
    }
    
    catch(...)
    {
        cout<<"Enter non-zero value for b."<<endl;
    }
    
    return 0;
    
}