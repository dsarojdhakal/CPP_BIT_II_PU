#include<iostream>
using namespace std;

class MyClass{
    private:
        int num1 , num2;
        static int num3;
    public:
        int getData(int a, int b);
        void putData();
        static void myFunc(){
            cout<<"Num3 = "<<num3<<endl;
        }
};

int MyClass :: num3 = 33;

int MyClass :: getData(int a, int b){
    num1 = a;
    num2 = b;
    num3 = num3 + 1;
}

void MyClass :: putData(){
    cout<<"Num1 = "<<num1<<"\t";
    cout<<"Num2 = "<< num2<<"\t";
    cout<<"Num3 = "<< num3<<endl;
}

// void MyClass ::myFunc(){
//     //cout<<"Num1 = "<<num1<<endl;
//     //cout<<"Num2 = "<< num2<<endl;
//     cout<<"Num3 = "<< num3 <<endl;
// }

int main(){
    MyClass m1, m2, m3;
    m1.getData(2,4);
    m1.putData();
    m2.getData(5,6);
    m2.putData();
    m3.getData(7,2);
    m3.putData();
    cout<<endl;
    m1.putData();
    m2.putData();
    m3.putData();

    cout<<endl<<"Calling a static function using an object of class: "<<endl;
    m1.myFunc();

    cout<<"Calling a static function using :: with name of class"<<endl;
    MyClass ::myFunc();

    return 0;

}
