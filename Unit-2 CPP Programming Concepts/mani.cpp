#include <iostream>
#include <iomanip> // Include the header for manipulators
using namespace std;

int main() {
    int num1 = 123;
    int num2 = 456;
    int num3 = 789;

    cout << "Using endl to end a line:" << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    cout << "Number 3: " << num3 << endl;

    cout << "\nUsing setw to set width:" << endl;
    cout << "Number 1: " << setw(10) << num1 << endl;
    cout << "Number 2: " << setw(10) << num2 << endl;
    cout << "Number 3: " << setw(10) << num3 << endl;

    return 0;
}
