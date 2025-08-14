#include <iostream>
using namespace std;

class Shape {
    public: 
        virtual float cal_Area() = 0;  
};

class Square: public Shape {
    float a;
    public:
        Square(float l) {
            a = l;
        }
        float cal_Area() {
            return a * a; 
        }
};z

class Circle: public Shape {
    float r;
    public:

        Circle(float x) {
            r = x;
        }
        float cal_Area() {
            return 3.14 * r * r;
        }
};

class Rectangle: public Shape {
    float l;
    float b;
    public:
        Rectangle(float x, float y) {
            l = x;
            b = y;
        }
        float cal_Area() {
            return l * b; 
        }
};
int main() // main function
{

    Shape * shape;
    Square s(3.4);
    Rectangle r(5, 6);
    Circle c(7.8);
    shape = & s;
    int a1 = shape -> cal_Area();
    shape = & r;
    int a2 = shape -> cal_Area();
    shape = & c;
    int a3 = shape -> cal_Area();
    std::cout << "The area of square is: " << a1 << std::endl;
    std::cout << "The area of  rectangle is: " << a2 << std::endl;
    std::cout << "The area of  circle is: " << a3 << std::endl;
    return 0;
}
