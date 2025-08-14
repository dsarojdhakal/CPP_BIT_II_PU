#include<iostream>
using namespace std;

class Demo{
    string a;
        public:
        Demo(){};
        Demo(string x){
            a = x;
        }
        void display(){
            cout<<"String is  "<<a<<endl;
        }
        Demo operator+(Demo ddd){
            Demo cc;
            cc.a = a + ddd.a;
            return cc;
        }
};
int main(){
    string a = "Hello", b = "World";
    Demo d, dd(a);
    Demo ddd(b);
    d = dd + ddd;
    d.display();
    return 0;
}