#include<iostream>
using namespace std;

int main(){
    int n, sumEven, sumOdd ;
    cout<<"How many integers to add?"<<endl;
    cin >> n;
    for(int i = 1; i<n; i++){
        if(i%2 == 0){
            sumEven = sumEven + i;
        }

        else{
            sumOdd = sumOdd + i;
        } 
    }
    cout<< sumOdd<<endl;
    cout<<sumEven<<endl;
    return 0;
}