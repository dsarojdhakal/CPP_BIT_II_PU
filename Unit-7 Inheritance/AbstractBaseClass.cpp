// C++ Program to illustrate the abstract class and virtual functions
#include <iostream>
using namespace std;

struct Base {   //An abstract class in C++ can also be defined using struct keyword.
protected:
	int x;

    public:
        // pure virtual function
        virtual void fun() = 0;

        void inputputX(){
            cout<<"Enter the value of x: ";
            cin>>x;
        }
};

class Derived : public Base {
	int y;

    public:
        void fun() { 
            cout << "Enter Value for y : "; 
            cin>>y;
        }

        void add(){
            Base::inputputX();
            cout<<"x + y = "<<x+y;
        }
};

int main(void)
{
	Derived d;
	d.fun();
    d.add();

	return 0;
}
