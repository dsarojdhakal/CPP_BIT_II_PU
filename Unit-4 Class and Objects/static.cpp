#include<iostream>
using namespace std;

class Demo{
    public:
        static int x;

        static void add();

};

int Demo :: x =20; 

void Demo :: add(){
    cout<<"From static function";
}


int main(){
    Demo :: add();
    return 0;
}

