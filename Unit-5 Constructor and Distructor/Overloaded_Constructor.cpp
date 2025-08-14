#include <iostream>
// #include <string>

using namespace std; 

class MyClass {
private:
    int value;
    string description;

public:
    // Default constructor with no parameters
    MyClass() {
        value = 0;
        description = "Default construtor";
    }

    // Constructor with one parameter
    MyClass(int val) {
        value = val;
        description = "One parameter";
    }

    // Constructor with two parameters
    MyClass(int val, string desc) {
        value = val;
        description = desc;
    }

    void printDetails() {
        cout << "Value: " << value << endl;
        cout << "Description: " << description << endl<<endl;
    }
};

int main() {
    MyClass obj1;                            // Uses default constructor
    MyClass obj2(42);                        // Uses constructor with one parameter
    MyClass obj3(100, "Hello Ram !");        // Uses constructor with two parameters

    obj1.printDetails();
    obj2.printDetails();
    obj3.printDetails();

    return 0;
}
