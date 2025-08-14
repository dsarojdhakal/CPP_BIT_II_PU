#include<iostream>
using namespace std;

class Demo{
    int age;
    public:
        void Enterdata(){
            cout<<"Enter age: ";
            cin>>age;
        }
        void display(){
            cout<<"Age : "<<age<<endl;
        }
};

int main(){
    Demo *myArray = new Demo[5];

    for(int i=0; i<2; i++ ){
        cout<<"Enter data for object :"<<i+1<<endl;
        myArray[i].Enterdata();
    }

    for(int i= 0; i<2; i++){
        myArray[i].display();
    }
    return 0;
}