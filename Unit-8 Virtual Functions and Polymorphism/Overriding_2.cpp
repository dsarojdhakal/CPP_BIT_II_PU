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


int main() {
    A *ptr = new B;
    ptr->method();

    delete ptr;
    return 0;
}
