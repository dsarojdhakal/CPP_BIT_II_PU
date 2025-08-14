#include<iostream>
using namespace std;

class Class1 {
    int a, b;
    public:
        Class1(){
            a = 25;
            b = 9;
        }
        void display(){
            cout<<"a = "<<a<< "\t b = "<<b;
        }
};
int main(){
    Class1 c1;
    c1.display();
    return 0;
}