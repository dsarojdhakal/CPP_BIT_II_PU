#include<iostream>
using namespace std;

class Stock
{   private:
        int items;
        float price;
    public:
        Stock(int a,float p)
        {
            items = a;
            price = p;
        }
        void putdata()
        {
            cout<<"Items: "<<items<<"\n";
            cout<<"Price: "<<price<<"\n";
        }
        operator float()
        {
            return (items*price);
        }
        
};

int main()
{
    Stock s(45,2.5);
    float total_value;
    total_value = s; 
    cout<<"\nData of s ";
    s.putdata();
    cout<<"Total float value = "<<total_value;
    return 0;
}
