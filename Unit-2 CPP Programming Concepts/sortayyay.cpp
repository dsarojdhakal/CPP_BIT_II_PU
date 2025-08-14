#include<iostream>
using namespace std;

int main(){
    int a[4], temp;
    cout<<"Enter";
    for(int i=0; i<4; i++)
        cin>>a[i];
    for(int i = 0;i<4;i++){
        if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<4;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}