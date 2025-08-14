#include<iostream>
using namespace std;

class Class1 {
    public:
        Class1(){
            cout<<"Hello From Constructor."<<endl;
        }
};

int main(){
    Class1 c1;
    return 0;
}