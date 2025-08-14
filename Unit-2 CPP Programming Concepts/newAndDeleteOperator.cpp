#include <iostream>

int main() {
    using namespace std;

    int *numPtr = new int;
    *numPtr = 42;
    cout << "Value: " << *numPtr << endl;

    delete numPtr;

    return 0;
}
