#include <iostream>

using namespace std;

int main() {
    int age;
    try {
        cout<<"Enter your age: ";
        cin>> age;
        if (age >= 18) {
            cout << "Access granted - you are old enough." << endl;
        } else {
            throw age;  // Throw the age as an exception
        }
    }
    catch (int myNum) {
        cout << "Access denied - You must be at least 18 years old." << endl;
        cout << "Age is: " << myNum << endl;
    }

    return 0;
}