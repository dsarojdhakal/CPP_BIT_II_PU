// #include <iostream>
// using namespace std;

// // Class declaration
// class My_Class1 {
//     // int x = 20;
//     // int var2;
//     public:
//         int myVar;
//         void myMethod1(){
//             cout<<"The value of var :"<<myVar<<endl;
//         }
// };

// int main() {
    
//     // Creating an object of MyClass
//     My_Class1 obj;
//     obj.myVar = 28;
//     obj.myMethod1();
//     // cout << "Value of myVar: " << obj.myVar << endl
//     return 0;
// }


// // name of class followed by object name
// //  class Demo{

// //  };

// //  int main(){
// //     Demo d1, d2;
// //  }

#include<iostream>
using namespace std;

class Demo1{
    int x ;

    public:
        int y;

        void display();

        void display2(){
            cout<<"Hello from inside class"<<endl;
        }
};

void Demo1 :: display(){
    cout<<"Hello World ";
}

int main(){
    Demo1 Demo1;
    Demo1.display2();
    return 0;
}