#include<iostream>
using namespace std;

class Class1{
    private:
        int num;
    public:
        int num2;
        friend class Class2;
        void inputNum(){
            cout<<"Enter an integer number for Class1: ";
            cin>>num;
        }
};

class Class2{
    private:
        int num ;
    public:
        void inputNum(){
            cout<<"Enter an integer number for Class2: ";
            cin>>num;
        }
        void showSum(Class1 c1){
            int sum;
            sum = c1.num + c1.num2 + num;
            cout<<"Sum of num from class1 and class2 = "<<sum<<endl;
        }
};


int main(){
    Class1 c1;
    Class2 c2;
    c1.num2 = 8;
    c1.inputNum();
    c2.inputNum();
    c2.showSum(c1);
    return 0;
}