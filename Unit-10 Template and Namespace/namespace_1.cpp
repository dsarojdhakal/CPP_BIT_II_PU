#include <iostream>
using namespace std;

namespace myspace
{
    void display()
    {
        cout << "Inside myspace" << endl;
    }
}

using namespace myspace;

int main ()
{
    display();
    return 0;
}
