#include <iostream>

using namespace std;

class Base {
public:
    virtual void display() = 0;
};

class Derived : public Base {
public:
    void display(){
        cout << "Derived class display()" << endl;
    }
};

int main() {
    Base* aa = new Derived;
    aa->display();  // Late binding
    return 0;
}
