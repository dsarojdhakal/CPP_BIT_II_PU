#include<iostream>
using namespace std;

int main(){
    const int n = 5;
    int myArr[n], temp; // int myArr[5];

    cout<<"Enter elements for array"<<endl;
    
    for(int i=0; i<n; i++){
        cin>>myArr[i];
    }
    cout<<"Elements in the array before reverse: "<< endl;
    for(int i = 0; i < n; i++){
        cout<<myArr[i]<<"\t";
    }

    for(int i = 0; i < n/2; i++){
        temp = myArr[i];
        myArr[i] = myArr[n-i-1];   
        myArr[n-i-1] = temp;        
    }
    cout<<"Elements in the array after reverse: "<< endl;
    for(int i = 0; i < n; i++){
        cout<<myArr[i]<<"\t";
    }
    return 0;    
}  