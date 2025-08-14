/*
// WAP to add two 3*3 matrix;
#include <iostream>
using namespace std;

int main() {

    // Define two 3x3 matrices
    int matrix1[3][3] = {{1, 0, 3}, {0, 1, 0}, {7, 8, 9}};
    int matrix2[3][3] = {{2, 8, 1}, {6, 5, 4}, {0, 1, 0}};
    int resultMatrix[3][3];  // To store the result of addition

    // Perform matrix addition
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result matrix
    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/
/*WAP in c++ to take inputs from user for two 3*3 array and
show the sum of these 2 arrays as output*/
#include <iostream>
using namespace std;
int main(){
    int myArr1[3][3], myArr2[3][3], sumArr[3][3];
    cout<<"\nEnter elements for Array-1: "<<endl;
    for(int i=0; i<3; i++){
       for(int j=0; j<3; j++){
            cin>>myArr1[i][j];
        }    
    }
    cout<<"\nEnter elements for Array-2: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>myArr2[i][j];
        }
    }
    cout<<"\n The sum of two array is: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sumArr[i][j] = myArr1[i][j] + myArr2[i][j];
            cout<<sumArr[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}