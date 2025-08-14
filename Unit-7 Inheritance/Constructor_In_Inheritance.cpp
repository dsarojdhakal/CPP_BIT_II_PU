#include<iostream>
using namespace std;

class A1 {
public:
    A1() {
        cout << "Constructor of the base class A1 \n";
    }

    ~A1() {
        cout << "Destructor of the base class A1 \n";
    }
};

class A2 : public A1 {
public:
    A2() {
        cout << "Constructor of the base class A2 \n";
    }

    ~A2() {
        cout << "Destructor of the base class A2 \n";
    }
};

class S : public A2 {
public:
    S() {
        cout << "Constructor of the derived class S \n";
    }

    ~S() {
        cout << "Destructor of the derived class S \n";
    }
};

int main() {
    S obj;
    return 0;
}
