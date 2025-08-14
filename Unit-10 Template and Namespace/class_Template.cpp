// C++ program to demonstrate the use of class templates

#include <iostream>
using namespace std;

template <typename T>
class Number {
   private:
    T num;

   public:
    Number(T n){
        num = n;
    }

    T getNum() {
        return num;
    }
};

int main() {

    Number<int> num1(7);

    Number<double> num2(7.7);

    cout << "int Number = " << num1.getNum() << endl;
    cout << "double Number = " << num2.getNum() << endl;

    return 0;
}