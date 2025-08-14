#include <iostream>

int main() {
    using namespace std;

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate memory for an array of integers
    int* myArr = new int[size];

    // Check if memory allocation was successful
    if (myArr == nullptr) {
        cout << "Memory allocation failed. Exiting..." << endl;
        return 1;
    }

    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; ++i) {
        cin >> myArr[i];
    }

    cout << "You entered the following integers: ";
    for (int i = 0; i < size; ++i) {
        cout << myArr[i] << " ";
    }
    cout << endl;

    // Deallocate the dynamically allocated memory
    delete[] myArr;

    return 0;
}
