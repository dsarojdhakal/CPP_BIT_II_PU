#include <iostream>

using namespace std;

int main() {
    const int size = 7;
    int myArray[size] = {12, 45, 6, 78, 90, 54, 23};

    int maxVal = myArray[0]; // Initialize maxVal with the first element
    int minVal = myArray[0]; // Initialize minVal with the first element

    // Iterate through the array to find max and min values
    for (int i = 1; i < size; i++) {
        if (myArray[i] > maxVal) {
            maxVal = myArray[i]; // Update maxVal if a larger value is found
        }
        if (myArray[i] < minVal) {
            minVal = myArray[i]; // Update minVal if a smaller value is found
        }
    }

    cout << "Maximum value in the array: " << maxVal << endl;
    cout << "Minimum value in the array:  " << minVal << endl;

    return 0;
}
