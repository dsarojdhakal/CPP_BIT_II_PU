//WAP in C++ to show the use of destructor.
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor
    Rectangle() {
        length = 1.0;
        width = 1.0;
    }

    // Constructor with parameters
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Destructor
    ~Rectangle() {
        double area = length * width;
        cout << "Destructor: Rectangle with length " << length << " and width " << width << " has area " << area << endl;
    }
};

int main() {
    Rectangle defaultRect; 
    Rectangle customRect(5.0, 3.0);

    return 0;
}
