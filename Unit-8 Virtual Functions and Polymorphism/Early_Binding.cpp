#include <iostream>

using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display()" << endl;
    }
};

int main() {
    Base bb;
    bb.display();  // Early binding
    return 0;
}
