#include <iostream>
using namespace std;

class ClassA {
private:
    int privateDataA;

public:
    ClassA(int data) : privateDataA(data) {}

    int getPrivateDataA() {
        return privateDataA;
    }
};

class ClassB {
private:
    int privateDataB;

public:
    ClassB(int data) : privateDataB(data) {}

    void setDataFromClassA(ClassA &objA) {
        privateDataB = objA.getPrivateDataA();
    }

    void displayData() {
        cout << "Data from ClassB: " << privateDataB << endl;
    }
};

int main() {
    ClassA objA(42);
    ClassB objB(0);

    objB.setDataFromClassA(objA);
    objB.displayData();

    return 0;
}
