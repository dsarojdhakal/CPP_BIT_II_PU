#include<iostream>
using namespace std;

class Demo {
    int a, b;
    public:
        //parameterized constructor
        Demo(int aa, int bb){
            a = aa;
            b = bb;
        }
        void display(){
            cout<<"a = "<<a<< "\t b = "<<b;
        }
};

int main(){
    Demo c1(2,3);
    c1.display();
    return 0;
}