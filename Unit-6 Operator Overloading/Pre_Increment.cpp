#include<iostream>
using namespace std;

class A{
    int x;
    public:
        void getdata(){
            cout<<"Enter vaue for x :";
            cin>>x;
        }

        A operator++(){
            x = x + 1;
        }

        void display(){
            cout<<" X = "<<x<<endl;
        }

};

int main(){
    A bb;
    bb.getdata();
    ++bb;
    bb.display();
    return 0;
}