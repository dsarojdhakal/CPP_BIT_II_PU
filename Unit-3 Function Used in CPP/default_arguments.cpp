#include <iostream>
using namespace std;

// Function with default arguments
double calculate(double a, double b = 12, double c = 3, double d = 1) {
    return a * b * c * d ;
}

int main() {
    // Uses default values for b and c
    double result1 = calculate(2);  

    // Uses default value for c
    double result2 = calculate(5, 4);

    // Overrides all default values        
    double result3 = calculate(5, 4, 2);     

    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    cout << "Result 3: " << result3 << endl;

    return 0;
}
