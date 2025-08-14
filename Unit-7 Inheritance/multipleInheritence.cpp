#include<iostream>
using namespace std;

// Base class 1
class A
{
protected:
    int a;

public:
    void input_A()
    {
        cout << "Enter the Value of A=";
        cin >> a;
    }

    void display_A()
    {
        cout << endl << "Value of A=" << a;
    }
};

// Base class 2
class B
{
protected:
    int b;

public:
    void input_B()
    {
        cout << "Enter the Value of B=";
        cin >> b;
    }

    void display_B()
    {
        cout << endl << "Value of B=" << b;
    }
};

// Derived class from A and B
class C : public A, public B
{
    int c, p;

public:
    void input_C()
    {
        cout << "Enter the Value of C=";
        cin >> c;
    }

    void display_C()
    {
        cout << endl << "Value of C=" << c;
    }

    void product()
    {
        p = a * b * c;
        cout << endl << "Product of " << a << " * " << b << " * " << c << " = " << p;
    }
};

int main()
{
    C cc;
    cc.input_A();
    cc.input_B();
    cc.input_C();
    cc.display_A();
    cc.display_B();
    cc.display_C();
    cc.product();

    return 0;
}
