#include<iostream>

using namespace std;

class Student{
    private:
        int age, height;
    public:
        void getdata(){
            cout<<"Enter age and height: ";
            cin>>age>>height;
        }

        void display(){
            cout<<"Age = "<<age<<endl;
            cout<<"Height = "<<height<<endl;
            
        }
};

// void Student::  display(){
//             cout<<"Sum of two numbers = "<<a+b<<endl;
//         }

int main(){
    Student s1, s2;
    s1.getdata();
    s1.display();
    s2.getdata();
    s2.display();
    return 0;
}