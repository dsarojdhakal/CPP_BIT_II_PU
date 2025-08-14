#include <iostream>

using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display()" << endl;
    }
};

class Derived : public Base {
public:
    void display(){
        cout << "Derived class display()" << endl;
    }
};

int main() {
    Base *bptr ;
    Derived aa;
    bptr = &aa;
    bptr->display();
    return 0;
}
