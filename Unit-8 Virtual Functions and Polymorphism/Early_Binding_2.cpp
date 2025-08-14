#include <iostream>

using namespace std;

class Base {
    public:
        void display_A() {
            cout << "Base class display() function " << endl;
        }
};

class Derived : public Base{
    public:
        void display_B(){
            cout<<"Derived class Display() function"<<endl;
        }
};

int main() {
    Derived obj;
    obj.display_A();  // Early binding
    obj.display_B();
    return 0;
}
