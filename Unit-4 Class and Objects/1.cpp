#include<iostream>
using namespace std;
void display();
class demo{
    public:
        void dis(){
            cout<<"hello world ";
        }
};

int main(){
    demo d1;
    d1.dis();
    display();
    return 0;
}

void display(){
    cout<<"Hei";
}