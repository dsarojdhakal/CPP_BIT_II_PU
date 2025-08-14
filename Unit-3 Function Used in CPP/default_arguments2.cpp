#include <iostream>
using namespace std;

//void printInfo(string name = "John", int age = 30, double height = 5.8);


int main() {
    cout << "With default arguments:" << endl;

    void printInfo(string name = "John", int age = 30, double height = 5.8);

    // Using all default values
    printInfo(); 
    cout << endl;

    cout << "Overriding some default arguments:" << endl;

    // Overriding name and age, using default height
    printInfo("Ram", 25); 
    cout << endl;

    cout << "Overriding all default arguments:" << endl;
    printInfo("Shyam", 40, 6.1); // Overriding all values

    return 0;
}

// Function with default arguments of different types
void printInfo(string name ,int age ,double height ) {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
}
