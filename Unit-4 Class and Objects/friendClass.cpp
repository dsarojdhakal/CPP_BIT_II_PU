#include <iostream>
using namespace std;

class ClassA {
private:
    int data;

public:
    friend class ClassB;

    void setData(int value) {
        data = value;
    }
};

class ClassB {
public:
    void printData(ClassA a1){
        cout << a1.data << endl;
    };
};

int main() {
    ClassA a;
    a.setData(10);

    ClassB b;
    b.printData(a);

    return 0;
}
