#include <iostream>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 3;
    
    int sum = add(num1, num2); 

    cout << "Sum of " << num1 << " and " << num2 << " is " << sum << endl;
    
    return 0;
}
