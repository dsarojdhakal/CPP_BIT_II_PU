#include<iostream>

using namespace std;

int main(){
    int num1, num2, temp;
    num1 = 12;
    num2 = 33;
    cout<<"The value of num1 before swap :"<< num1<<endl;
    cout<<"The value of num2 before swap :"<< num2<<endl;

    temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"The value of num1 after swap :"<< num1<<endl;
    cout<<"The value of num2 after swap :"<< num2<<endl;   
    return 0;   

}