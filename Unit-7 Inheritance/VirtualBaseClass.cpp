#include <iostream>
using namespace std;

class A {
public:
    void method_A() {
        cout << "Method in class A" << endl;
    }
};

class B : virtual public A {
public:
    void method_B() {
        cout << "Method in class B" << endl;
    }
};

class C :virtual public A {
public:
    void method_C() {
        cout << "Method in class C" << endl;
    }
};

class D : public B, public C {
    public:
        void method_D(){
            cout<<"Method in class D"<<endl;
        }
};

int main() {
    D dd;
    dd.method_A();
    dd.method_B();
    dd.method_C();
    dd.method_D();
    return 0;
}
