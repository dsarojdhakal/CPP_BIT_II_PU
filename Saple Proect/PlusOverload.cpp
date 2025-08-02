#include<iostream>
using namespace std;

class Student{
    private:
        int age;
        double height;

    public:
        Student(){
            age = 20;
            height = 5.11;
        }
        void displayData(){
            cout<<endl<<"Age = "<<age<< "\t and Height = "<<height<<endl<<endl;
        }
        Student operator +(Student s2){
            Student s3;
            s3.age = age + s2.age;
            s3.height = height + s2.height;
            return s3;
        }
};

int main(){
    Student s1,s2,s3;
    s3 = s1 + s2;
    s3.displayData();
    return 0;
}
