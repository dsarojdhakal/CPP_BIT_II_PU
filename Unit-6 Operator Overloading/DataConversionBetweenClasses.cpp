#include <iostream>
using namespace std;

class Demo1 {
public:
    int data;
    Demo1(int value) : data(value) {}
};

class Demo2 {
public:
    double Data2;

    Demo2(double value) : Data2(value) {}

    Demo2 convert(const Demo1& source) {
        return Demo2(static_cast<double>(source.data));
    }
};

int main() {
    Demo1 sourceObj(42);

    Demo2 destinationObj = destinationObj.convert(sourceObj);

    cout << "Source Data: " << sourceObj.data << endl;
    cout << "Converted Data: " << destinationObj.Data2 << endl;

    return 0;
}
