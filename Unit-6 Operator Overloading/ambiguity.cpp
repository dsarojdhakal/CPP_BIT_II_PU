#include <iostream>

using namespace std;

class A {
public:
    void method() {
        cout << "Method in class A" << endl;
    }
};

class B : public A {
public:
    void method() {
        cout << "Method in class B" << endl;
    }
};

class C : public A {
public:
    void method() {
        cout << "Method in class C" << endl;
    }
};

class D : public B, public C {
public:
    // Create an alias for the method of class A
    using A::method;
};

int main() {
    D dd;
    dd.method(); 
    dd.B::method();
    dd.C::method();

    return 0;
}
