#include<iostream>
using namespace std;

class MyClass2;

class MyClass1{
    private:
        int myNum1;
    public:
        void getNum(){
            cout<<"Enter num1 for class-1: ";
            cin>>myNum1;
        }
        friend void addNum(MyClass1, MyClass2);
};

class MyClass2{
    private:  
        int myNum2;
    public:
        void getnum(){
            cout<<"Enter num2 for class-2: ";
            cin>>myNum2;
        }
        friend void addNum(MyClass1,MyClass2);

};

void addNum(MyClass1 mm, MyClass2 nn){
    int sum = mm.myNum1 + nn.myNum2;
    cout<<"Sum of two numbers = "<<sum<<endl;
}

int main(){
    MyClass1 m1;
    MyClass2 m2;
    m1.getNum();
    m2.getnum();
    addNum(m1,m2);
    return 0;    
}