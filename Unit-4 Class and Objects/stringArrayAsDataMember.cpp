#include<iostream>
using namespace std;

int main(){
    int n;
    string myName = "John";
    cout<<"How many students are there in the class? :";
    cin>>n;
    string stdNames[n];
    
    cout<<"Enter name of students in a class:"<<endl;
    for(int i = 0; i<n; i++){
        
        cout<<"Name of student "<<i+1<<" : ";
        cin>>stdNames[i];
    }

    cout<<"The name of students in a class:"<<endl;
    for(int i = 0; i<n; i++){
        
        cout<<stdNames[i]<<"\t";
    }

    cout<<endl<<"The name from string is : "<<myName;
    return 0;
}