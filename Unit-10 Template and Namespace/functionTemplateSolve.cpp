#include <iostream>
using namespace std;

template <typename T>
T getData(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

template <typename T>
T findMax(T arr[]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }

    cout << "\nTop 5 largest values in ascending order:\n";
    for (int i = 4; i>=0;i--) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    const int size = 10;
    int intArray[size];
    float floatArray[size];

    cout<<"Enter 10 integer numbers";
    getData(intArray, size);

    cout<<"Enter 10 float numbers";
    getData(floatArray, size);

    findMax(intArray);
    findMax(floatArray);

    return 0;
}
