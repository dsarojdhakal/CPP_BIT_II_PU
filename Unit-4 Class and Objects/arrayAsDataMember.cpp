#include<iostream>
using namespace std;

class MyClass {
private:
    int myArray[10];  // Array of integers as a data member

public:
    // Constructor to initialize the array
    MyClass() {
        for (int i = 0; i < 10; i++) {
            myArray[i] = i;
        }
    }

    void printArray() {
        for (int i = 0; i < 10; i++) {
            cout << myArray[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MyClass obj;
    obj.printArray();
    return 0;
}
