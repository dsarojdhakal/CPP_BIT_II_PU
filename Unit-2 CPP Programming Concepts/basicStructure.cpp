/*WAP in C++ to take integres inputs from user and 
show the integers stored in the array.*/
#include <iostream>
using namespace std;

int main() {
    int myNumbers[5];

    cout << "Enter 5 integers:" << endl;

    for (int i = 0; i < 5; ++i) {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> myNumbers[i];
    }
    cout << "Entered integers are:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << myNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}
