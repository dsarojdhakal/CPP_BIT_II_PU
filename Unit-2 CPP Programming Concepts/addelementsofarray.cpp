#include<iostream>
using namespace std;

int main(){
    int sum;
    int myarr[3][3] = {
        {1,2,3},
        {3,5,4},
        {3,7,5}
    };

    cout<<"The elements of array : "<<endl;
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3; j++){
            cout<<myarr[i][j]<<"\t";
        }
        cout<<endl;
    }

    for(int i = 0; i<3;i++){
        for(int j = 0; j<3; j++){
            sum = sum + myarr[i][j];
        }
    }

    cout<<"the sum of elements of array is: "<<sum<<endl;
    return 0;  

}