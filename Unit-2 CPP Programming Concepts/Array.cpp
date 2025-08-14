//WAP in c++ to initilize an array and print the elements of the array.

#include <iostream>
using namespace std;

int main() {

  int numbers[5] = {7, 5, 6, 12, 35};

  cout << "\nThe numbers on array are: ";


  for (int i = 0; i < 5; ++i) {
    cout << numbers[i] << "  ";
  }

  return 0;
}