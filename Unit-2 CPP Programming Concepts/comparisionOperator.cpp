#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    bool isEqual = (a == b);
    bool isGreater = (a > b);
    bool isLessOrEqual = (a <= b);

    cout << "Is equal: " << isEqual << endl;
    cout << "Is greater: " << isGreater << endl;
    cout << "Is less than or equal: " << isLessOrEqual << endl;

    return 0;
}
