#include<iostream>
using namespace std;

int main(){
    int *ptr = new int[5];
    ptr[5] = {1,2,3,4,5};

    for(int i = 0; i<3; i++){
        cout<<ptr;
    }
    delete ptr;

    return 0;
}