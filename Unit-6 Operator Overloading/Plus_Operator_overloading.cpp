#include<iostream>
using namespace std;

class A{
    int x;
    public:
        void getdata(){
            cout<<"Enter vaue for x :";
            cin>>x;
        }

        A operator+(A cc){
            A dd;
            dd.x = x + cc.x;
            return dd;
        }

        void display(){
            cout<<" X = "<<x<<endl;  
        }

};

int main(){   
    A bb,cc,dd;
    bb.getdata();
    cc.getdata();
    dd = bb + cc;
    bb.display();
    cc.display();
    dd.display();
    return 0;
}