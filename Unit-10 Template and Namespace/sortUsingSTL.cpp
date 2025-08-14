//WAP in C++ to sort the elements of an array using standard template library

#include <iostream>
#include <algorithm>  
#include <vector>    

using namespace std;

int main() {
    const int size = 3;
    vector<int> elements(size);

    cout << "Enter 3 integers:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> elements[i];
    }
 
    sort(elements.begin(), elements.end());
    // sort(elements);

    cout << "\nSorted elements:\n";
    for (int i = 0; i < size; ++i) {
        cout << elements[i] << " ";
    }

    return 0;
}
