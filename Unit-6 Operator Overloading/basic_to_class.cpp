#include<iostream>
using namespace std;
class TimeClass
{
        int hrs;
        int min;
    public:
        TimeClass(){
            hrs = 0;
            min = 0;
        }
        TimeClass(int t)
        {
            hrs = t/60;
            min = t%60;
        } 
        void display()
        {
            cout<<"Hours = "<<hrs<<"Minutes = "<<min;
        }
};

int main()
{   
    TimeClass t2;
    TimeClass t1(101);  
    t1.display();
    return 0;
}