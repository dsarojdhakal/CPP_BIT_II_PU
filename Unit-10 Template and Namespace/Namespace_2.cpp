#include <iostream>
using namespace std;

// first name space
namespace first_space
{
    void func()
    {
        cout << "Inside first_space" << endl;
    }
}

// second name space
namespace second_space
{
    void func()
    {
        cout << "Inside second_space" << endl;
    }
}

int main ()
{
    second_space::func();
    first_space::func();
    return 0;
}
