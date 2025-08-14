#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;
    int c = 22;
    cout << "Value of b before assignment: " << b << endl;
    cout << "Value of a before assignment: " << a << endl;

    b = a;
    a = c;
    cout << "Value of b after assignment: " << b << endl;
    cout << "Value of a after assignment: " << a << endl;
    
    return 0;
}
