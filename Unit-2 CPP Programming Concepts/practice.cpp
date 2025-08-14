/*
// this double slash is used for the comment and this is not run by the program during the execution
#include<iostream>
// iostream is used for cin and cout
using namespace std;
// namespace std is used as standard
bool isPrime(int num){
if(num <= 1) {return false;}
// num 1 and num2 is input
for(int i = 2; i*i <= num; i++){
    if(num%i == 0){
        return false;
    }
}
return true;
}

int main(){
    int num;
    cout<<"Enter a number:"<< endl;
    cin>>num;
    if(isPrime(num)){
        cout<<num<<" is a prime number"<< endl;
    }
    else{
        cout<<num<<" is not a prime number";
    }
    return 0;
}

*/