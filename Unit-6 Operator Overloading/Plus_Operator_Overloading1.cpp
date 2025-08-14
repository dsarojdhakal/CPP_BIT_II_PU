#include<iostream>
using namespace std;

class Demo{
    int a, b;
    public:
        Demo(){};
        Demo(int x, int y){
            a = x;
            b = y;
        }
        void display(){
            cout<<"a = "<<a<<" b = "<<b<<endl;
        }
        Demo operator+(Demo bb){
            Demo cc;
            cc.a = a + bb.a;
            cc.b = b + bb.b;
            return cc;
        }
};
int main(){
    Demo aa(3,4), bb(2,1),cc;
    cc = aa + bb;
    aa.display();
    bb.display();
    cc.display();
    return 0;
}