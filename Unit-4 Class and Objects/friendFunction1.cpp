// Example program for frend functon
#include <iostream>
using namespace std;

class Distance {
    private:
        friend int multNum(Distance);
    public:
        int product; 

};

int multNum(Distance d1){
    d1.product = d1.product * 5;
    return d1.product;
}

int main() {
    Distance D;
    D.product = 20;
    cout<<"Product: "<<multNum(D);
    return 0;
}