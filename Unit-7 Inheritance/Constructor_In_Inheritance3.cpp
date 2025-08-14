#include <iostream>
using namespace std;
class Base
{
    public:
        Base ()
        {
            cout << "Default of Base" << endl;
        }
        Base (int x)
        {
            cout << "Parameter of Base = " << x << endl;
        }
};
class Derived : public Base
{
    public:
        Derived ()
        {
            cout << "Default of Derived" << endl;
        }

        Derived (int a)
        { 
            cout << "Parameter of Derived : " << a << endl;
        }

        Derived(int x, int a) : Base(x)
        {
         cout << "Parameter of Derived = " << a;
        }
};
int main()
{
    Derived d1,d2(10),d3(25, 15);
}