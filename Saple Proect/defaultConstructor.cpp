#include<iostream>
using namespace std;

class Person{
    private:
        int age;
        double wt;
    public:
        Person(){
            age = 30;
            wt = 60;
        }

        Person(int a, double b){
            age = a;
            wt = b;
        }

        void display(){
            cout<<endl<<endl<<age<<"\t"<<wt<<endl;
        }
};

int main(){
    Person p1, p2(22,45.7);
    p1.display();
    p2.display();
    return 0;

}