#include<iostream>
using namespace std;

class X {
protected:
    int x;

public:
    void input_X() {
        cout << "Enter the Value of X=";
        cin >> x;
    }

    void display_X() {
        cout << endl << "Value of X=" << x;
    }
};

class Y : public X {
protected:
    int y;

public:
    void input_Y() {
        cout << "Enter the Value of Y=";
        cin >> y;
    }

    void display_Y() {
        cout << endl << "Value of Y=" << y;
    }
};

class Z : public X {
protected:
    int z, s;

public:
    void input_Z() {
        cout << "Enter the Value of Z=";
        cin >> z;
    }

    void display_Z() {
        cout << endl << "Value of Z=" << z;
    }

    void sum() {
        s = x + z;
        cout << endl << "Sum of " << x << " + " << z << " = " << s;
    }
};

int main() {
    Z zz;
    Y yy;
    zz.input_X();
    yy.input_Y();
    zz.input_Z();
    zz.display_X();
    yy.display_Y();
    zz.display_Z();
    zz.sum();

    return 0;
}