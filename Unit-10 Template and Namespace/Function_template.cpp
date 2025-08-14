#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main() {
    int intMax = findMax(5, 10);
    cout << "Maximum of 5 and 10 is " << intMax <<endl;

    double doubleMax = findMax(3.14, 2.71);
    cout << "Maximum of 3.14 and 2.71 is " << doubleMax <<endl;

    return 0;
}
