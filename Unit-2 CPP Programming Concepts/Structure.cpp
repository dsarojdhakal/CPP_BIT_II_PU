//This is single line comment
/*this is multi-line comment
Program to demosntrate the basic structure of C++ 
Written by Saroj Dhakal, 2023/08/23*/

#include<iostream>
using namespace std;
//

class MyClass
{
    public:
    int a,b,c;
    void addition(){
        c = a + b;
        std::cout<<"Sum of two number is: "<<c<<std:: endl;
    }
};

//this is the main function
int main() {
    void display();
    MyClass m;
    m.a = 12;
    m.b = 10;
    m.addition();
    cout<<"Hello From Main Function"<<endl;
    display();
    return 0;

}

void display(){
    cout<<"Hello From uder-defined function"<<endl;
}

