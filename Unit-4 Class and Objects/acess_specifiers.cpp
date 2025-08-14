#include <iostream>

using namespace std;  // Using the std namespace

class MyClass {
public:
    int publicVar;
    
    void publicMethod() {
        cout << "This is a public method." << endl;
        cout << "The value of publicVar = "<< publicVar << endl;  
    }

private:
    int privateVar;
    
    void privateMethod() {
        cout << "This is a private method." << endl;
        cout << "The value of privateVar = "<< privateVar << endl;  
    }

protected:
    int protectedVar;
    
    void protectedMethod() {
        cout << "This is a protected method." << endl;
        cout << "The value of protectedVar = "<< protectedVar << endl;  
    }
};

int main() {
    MyClass obj;
    
    obj.publicVar = 42;
    obj.publicMethod();

    // Accessing private members directly from outside the class is not allowed and will result in a compilation error.
    // obj.privateVar = 10; // Error
    // obj.privateMethod(); // Error

    // Accessing protected members directly from outside the class is not allowed and will result in a compilation error.
    //obj.protectedVar = 20; // Error
    //obj.protectedMethod(); // Error

    return 0;
}
