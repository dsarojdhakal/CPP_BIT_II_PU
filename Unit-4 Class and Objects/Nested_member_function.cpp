#include <iostream>
using namespace std;

class MyFirstClass {
private:
    int num;
    void printNum() {
        cout << "The number is: " << num << endl;
    }

public:
    void setNum(int n) {
        num = n;
    }

    void printNumTwice() {
        printNum();
        printNum();
    }
};

int main() {
    MyFirstClass obj,obj2;
    obj.setNum(12);
    obj2.setNum(34);
    obj.printNumTwice();

    return 0;
}
