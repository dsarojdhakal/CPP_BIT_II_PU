#include<iostream>
using namespace std;

class demo{
    private:
        int var1, var2;
    public:
        demo(){
            var1 = 12;
            var2 = 9;
            cout<<"This is Default Constructor "<<endl;
        }

        demo(demo &d1){
            var1 = d1.var1-20;
            var2 = d1.var2 * 3;
            cout<<"This is Copy Constructor "<<endl;
        }
         void display(){
            cout<<"Var1 = "<<var1<<"\tVar2 = "<<var2<<endl;
         }
};

int main(){
    demo d1;
    demo d2(d1);
    d1.display();
    d2.display();
    return 0;
}