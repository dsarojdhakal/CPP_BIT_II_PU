#include <iostream>
using namespace std;

// first name space
namespace space1
{
    void display()
    {
        cout << "Inside space1" << endl;
    }
    }

    // second name space
    namespace space2
    {
    void display()
    {
        cout << "Inside space2" << endl;
    }
}

using namespace space1; 
// using namespace space2;

int main ()
{
	display();
	display(); 
	return 0;
}
