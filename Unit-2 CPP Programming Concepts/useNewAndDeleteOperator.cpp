#include <iostream>

using namespace std;

int main() {
    int *ptr = new int;     // Allocate memory for an integer
    *ptr = 35;              // Store a value in the allocated memory

    cout << "Value at dynamically allocated memory: " << *ptr << endl;
    cout << "Memory location of allocated memory: " << ptr << endl;

    delete ptr;             // Deallocate the memory

    return 0;
}
