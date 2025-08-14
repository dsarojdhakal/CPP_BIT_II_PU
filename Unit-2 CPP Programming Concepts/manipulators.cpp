#include <iostream>
#include <iomanip>
using namespace std;
int main()
{   
    //use of endl manipulator
    cout << "Hello "<<endl<<"Good Morning\n";
    cout << "Welcome to C++ Tutorials"<<endl;

    //use of integer manipulator
    cout << "Hex 163: " << hex << 163 <<endl;
    cout << "Oct 163: " << oct << 163 <<endl;
    cout << "Dec 163: " << dec << 163 <<endl;

    //use of setw manipulator
    cout << setw(10);
    cout<< "Hello World ! I'm from Nepal";
    return 0;
}