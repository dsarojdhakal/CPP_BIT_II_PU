#include <iostream>  
using namespace std;  

class Employee {  
   public:  
       int id = 10 ; //data member (also instance variable)      
       string name = "john"; //data member(also instance variable)  
       float salary= 10000 ;  
       Employee(int id, string name, float salary)    
        {    
            this->id = id;    
            this->name = name;    
            this->salary = salary;   
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<"  "<<salary<<endl;    
        }    
};  
int main(void) {  
    Employee e1 =Employee(1, "Ram", 1000); //creating an object of Employee   
    Employee e2=Employee(1, "Shyam", 2000); //creating an object of Employee  
    e1.display();    
    e2.display();    
    return 0;   
}