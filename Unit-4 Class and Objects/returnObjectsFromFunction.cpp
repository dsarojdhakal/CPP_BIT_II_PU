#include<iostream>
using namespace std;

class ComplexSum{
    
    public:
        float real, img;
        void readData();
        void displayData();
        void sum(ComplexSum, ComplexSum);
};

void ComplexSum ::readData(){
    cout<<"Enter real and Imaginary number "<<endl;
    cout<<"Real : ";
    cin>>real;
    cout<<"Imaginary: ";
    cin>>img;
}

ComplexSum sum(ComplexSum m1, ComplexSum m2){
    ComplexSum m3;
    m3.real = m1.real + m2.real;
    m3.img = m1.img + m2.img;
    return m3;
}

void ComplexSum :: displayData(){
    cout<<"real = " <<real;
    cout<<"\timaginary = "<<img<<endl;
}

int main(){
    ComplexSum m1, m2, m3;
    m1.readData();
    m2.readData();
    m3 = sum(m1, m2);
    cout<<"- Display -"<<endl;
    m1.displayData();
    m2.displayData();
    m3.displayData();
    return 0;
}