#include<iostream>
using namespace std;

class demo{
    private:
        int var1;
        double var2;
    public:
        demo(){
            var1 = 12;
            var2 = 9;
            cout<<"This is Default Constructor "<<endl;
        }

        demo(int d1){
            var1 = d1;
            var2 = d1;
            cout<<"This is Constructor with 1 argument "<<endl;
        }

        demo(int d1, int d2){
            var1 = d1;
            var2 = d1;
            cout<<"This is Constructor with 2 arguments "<<endl;
        }

        demo(int a, double b){
            var1 = a;
            var2 = b;
        }

        void display(){
            cout<<"Var1 = "<<var1<<"\tVar2 = "<<var2<<endl;
         }
};

int main(){
    demo d1, d2(2), d3(6, 3.7), d4(7,8);  
    d1.display();
    d2.display();
    d3.display();
    d4.display();
    return 0;
}

