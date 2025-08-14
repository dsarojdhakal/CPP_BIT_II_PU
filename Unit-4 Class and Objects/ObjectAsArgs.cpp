#include<iostream>
using namespace std;

class Employee{
    private:
        double sal;
    public:
        void getData();
        void SumSalary(Employee, Employee, Employee);
        void showdata(){
            cout<<"Salary = "<<sal<<endl<<endl;
        }
};

void Employee :: getData(){
    cout<<"Enter salary:"<<endl;
    cin>>sal;
}

void Employee :: SumSalary(Employee t1, Employee t2){
    int sal = t1.sal + t2.sal ;
}
int main(){
    Employee t1, t2, t3;
    t1.getData();  
    t2.getData();
    t3.SumSalary( t1, t2);
    return 0;
}