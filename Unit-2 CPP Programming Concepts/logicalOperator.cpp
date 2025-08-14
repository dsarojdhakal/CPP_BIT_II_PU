#include <iostream>
using namespace std;

int main() {
    int x,y,z;
    x = 12;
    y = 15;
    z = 9;
    if(x>y && x>z){
        cout<<"The largest integer is : "<<x<<endl;
    } else if(y>x && y>z){
        cout<<"The largest integer is : "<<y<<endl;
    } else{
        cout<<"The largest integer is : "<<z<<endl;
    }
    return 0;
}
