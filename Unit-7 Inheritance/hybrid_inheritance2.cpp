#include<iostream>
using namespace std;

class A{
    protected:
        int numA;
    public:
        void getA(){
             cout<<"Enter the value for class A : ";
             cin>>numA;
        }
};

class B: public A{
    protected:
        int numB;
    public:
        void getB(){
            cout<<"Enter the value for class B :";
            cin>>numB;
        }
};

class C : public B{
    protected:
        int numC;
    public:
        void getC(){
        cout<<"Enter the value for class C : ";
        cin>>numC;
        }
};

class D{
    protected:
        int numD;
    public:
        void getD(){
            cout<<"Enter the value for D";
            cin>>numD;
        }
};