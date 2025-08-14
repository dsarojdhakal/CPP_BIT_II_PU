#include<iostream>
using namespace std;
void add(int x,float y);
int main(){
    add(10,10.88);
    return 0;
}

void add(int x, float y){
    cout<<"Add = "<<x + y;
}