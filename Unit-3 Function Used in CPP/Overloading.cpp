#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

string add(string a, string b){
    return a + b;
}

int main() {

    int sum1 = add(3,6);
    double sum2 = add(6.6, 3.9); 
    string sum3 = add("Hello", " World");

    cout << "Sum of integers: " << sum1 << endl;
    cout << "Sum of doubles: " << sum2 << endl;
    cout << "Sum of Strings: " << sum3 << endl;
    return 0;
}
