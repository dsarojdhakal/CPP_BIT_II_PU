#include <iostream>

// Define an inline function to find the maximum of three integers
inline int findMax(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }

}

int main() {
    using namespace std; // Using the std namespace

    int num1, num2, num3;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    int max = findMax(num1, num2, num3);

    cout << "The maximum of " << num1 << ", " << num2 << ", and " << num3 << " is: " << max << endl;

    return 0;
}
