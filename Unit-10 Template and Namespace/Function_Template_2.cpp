//WAp in C++ to add two numbers and display the sum using function Template
#include <iostream>
using namespace std;

template <typename T>
T sum(T a, T b) {
    return a + b ;
}

int main() {
    int sumInt = sum(5, 10);
    cout << "Sum of 5 and 10 is " << sumInt <<endl;

    double sumDouble = sum(3.14, 2.71);
    cout << "Sum of 3.14 and 2.71 is " << sumDouble <<endl;

    return 0;
}