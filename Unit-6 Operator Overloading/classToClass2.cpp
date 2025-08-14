#include<iostream>
using namespace std;
class invent1
{
        int x;
        int y;
    public:
        invent1(int a,int b) {
            x = a;
            y = b;
        }
        void display() {
            cout<<"x: "<<x<<endl;
            cout<<"y: "<<y<<endl;
        }
        int getx() {
            return x;
        }
        int gety() {
            return y;
        }
};

class invent2 {
        float product;
    public:
        invent2() {
            product = 0;
        }

        invent2(invent1 s1)
        {
            product = s1.getx() * s1.gety(); //product = x * y
        }
        void display()
        {
            cout<<"product: "<<product<<endl;
        }        
};

int main()
{
    invent1 s1(100,5);
    invent2 d1;
    d1 = s1;
    s1.display();
    d1.display();
    return 0;
}


