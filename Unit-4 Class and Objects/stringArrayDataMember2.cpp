#include<iostream>
#include<string>
using namespace std;

class BitClass{
    
    public:
        int num1, num2;
        int stdId[4];
        string stdNames[4];

        void enterData(){
            cout<<"Enter name of students in a class:"<<endl;
            for(int i = 0; i<4; i++){
                cout<<"Name of student of ID "<<i+1<<" : ";
                cin>>stdNames[i];
            }
        }

        void displayData(){
            cout<<"The name of students in a class With their id:"<<endl;
            for(int i = 0; i<4; i++){
                
                cout<<"Id : "<< i+1 <<"\t Name : "<<stdNames[i]<<"\n";
            }
        }

        void displayNum(){
            cout<<"Num1 : "<<num1<<"\tNum2 : "<<num2<<endl;
        }
};

int main(){
    BitClass b1;
    b1.num1 = 22;
    b1.num2 = 67;
    
    b1.enterData();
    b1.displayData();
    b1.displayNum();
    return 0;
}