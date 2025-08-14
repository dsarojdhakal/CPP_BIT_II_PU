#include <iostream>
using namespace std;

int main() {
    try {
        int age;
        cout<<"Enter your age:"<<endl;
        cin>>age;
        if (age >= 18) {
            cout << "Access granted - you are old enough." <<endl;
        } 
        else if (age < 12)
        {
            throw age;
        }
        
        else {
            throw "Sure ! you want to continue? ";  
        }
    }
    
    catch (...) {
        cout << "Caught an unknown exception." << endl;
    }

    return 0;
}
