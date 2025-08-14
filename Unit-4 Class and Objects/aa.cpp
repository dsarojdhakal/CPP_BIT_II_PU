#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;

public:
    // Declaration of function
    void putdata();

    // Declaration of function
    void getdata();
};

// Defining the function outside
// the class
void Employee::putdata() {
    cout << "Enter Id : ";
    cin >> id;
    cout << "Enter Name : "<<endl;
    cin >> name;
}

// Defining the function outside
// the class
void Employee::getdata() {
    cout << id << " " << name << " " << endl;
}

int main() {
    // This is an array of objects having
    // maximum limit of 30 Employees
    Employee emp[30];
    int n, i;
    cout << "Enter Number of Employees - ";
    cin >> n;

    // Accessing the function
    for(i = 0; i < n; i++)
        emp[i].putdata();

    cout << "Employee Data - " << endl;

    // Accessing the function
    for(i = 0; i < n; i++)
        emp[i].getdata();
    
    cout<<endl;
    emp[1].getdata();
    return 0;
}
