#include<iostream>
using namespace std;

class School {
    int a, b;
    public:
        School(int aa, int bb);
        // School(int a, int b){
        //     a = a;
        //     b = b;
        // }
        void display(){
            cout<<"Age of Ram = "<<a<< "\t Age of Shyam = "<<b<<endl;
        }
};

School ::School(int x, int y){
    a = x; b = y;
}

int main(){
    School class1(6,7), class9(14, 15);
    cout<<endl<<"\t- Display Info -"<<endl<<endl;
    cout<<"The age of ram and shyam form class1 : "<<endl;
    class1.display();
    cout<<endl<<"The age of ram and shyam form class9 : "<<endl;
    class9.display();
    return 0;
}