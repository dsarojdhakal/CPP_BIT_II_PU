#include<iostream>
using namespace std;

int main(){
    int myArr[3][3] = {{1,2,3},{7,8,9},{3,4,5}};

    cout<<endl<<endl<<endl;
    cout<<"The elements of array are: "<< endl;

    for(int i = 0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<myArr[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<endl<<endl<<endl;
    return 0;
}