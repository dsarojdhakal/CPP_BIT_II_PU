// 
#include<iostream>
using namespace std;

class MyClass{
    int x ,y;

    //static int z = 22; is not possible.
    static int z;

    public:
        void putData(int a, int b){
            x = a;
            y = b;
            z = z +1;
        }

        void getData();
};

int MyClass :: z =10 ;
//but int myclass :: z = 33; is possible.

void MyClass :: getData(){
    cout<<x<<"\t"<<y<<"\t"<<z<<endl;
}

int main(){
    MyClass m1,m2,m3;
    m1.putData(4,9);
    m2.putData(7,8);
    m3.putData(11,46);
    m1.getData();
    m2.getData();
    m3.getData();
    return 0;
}