#include<iostream>
using namespace std;

int add(int a, int b= 1, int c =5){
    int sum = a + b+ c;
    return sum;
}

int main(){
    int s1, s2, s3;
    s1 = add(10);
    s2 = add(10,10);

    cout<<s1<<endl;
    cout<<s2<<endl;
    return 0;
}