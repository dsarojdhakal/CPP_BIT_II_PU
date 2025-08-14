#include<iostream>
using namespace std;

class student{
    int roll, age;
    string name,address;
    public:
        student(){
            roll = 1;
            age = 42;
            name = "Ram Sharma";
            address = "Kawasoti";
        }

        void display(){
            cout<<"Roll: "<<roll<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Address : "<<address<<endl;
        }

};

int main(){
    student ss;
    cout<<"Students Detail";
    ss.display();
    return 0;
}