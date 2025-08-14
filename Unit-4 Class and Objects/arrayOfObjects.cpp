#include <iostream>
using namespace std;

class Employee {
    private:
        int id;
        double sal;
        string name;

    public: 
        void putdata();
        void getdata();
};

void Employee::putdata() {
    cout << "Enter Id : ";
    cin >> id;
    cout<<"Enter Salary : ";
    cin>>sal;
    cout << "Enter Name : ";
    cin >> name;
    cout<<endl;
}

void Employee::getdata() {
    cout << id << "\t " << name << "\t" <<sal<< endl;
}

int main() {

    Employee emp[30];
    int n, i;
    cout << "Enter Number of Employees - ";
    cin >> n;

    for(i = 0; i < n; i++){
        emp[i].putdata();
    }

    cout << "- Employee Data - " << endl;

    for(i = 0; i < n; i++){
        emp[i].getdata();
    }        
    
    cout<<endl;
    return 0;
}
