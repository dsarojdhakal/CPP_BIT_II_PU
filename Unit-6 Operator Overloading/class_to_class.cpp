#include<iostream>
using namespace std;
class invent1
{
        int code;
        int items;
        float price;
    public:
        invent1(int a,int b,float c) {
            code = a;
            items = b;
            price = c;
        }
        void putdata() {
            cout<<"Code: "<<code<<endl;
            cout<<"Items: "<<items<<endl;
            cout<<"Value: "<<price<<endl;
        }
        int getcode() {
            return code;
        }
        int getitems() {
            return items;
        }
        int getprice() {
            return price;
        }

        operator float() {
            return (items*price);
        }
};

class invent2 {
        int code;
        float value;
    public:
        invent2() {
            code = 0;
            value = 0;
        }
        invent2(int x,float y) {
            code = x; value = y;
        }
        void putdata()
        {
            cout<<"Code: "<<code<<endl;
            cout<<"Value: "<<value<<endl;
        }
        invent2(invent1 p)
        {
            code = p.getcode();
            value = p.getitems() * p.getprice();
        }
};

main()
{
    invent1 s1(100,5,140.0);
    invent2 d1;
    float total_value;

    total_value = s1;
    d1 = s1;
    
    cout<<"Product details - invent1 type"<<endl;
    s1.putdata();
    cout<<"Stock value"<<endl;
    cout<<"value = "<<total_value<<endl;
    cout<<"Product details-invent2 type"<<endl;
    d1.putdata();
    return 0;
}
