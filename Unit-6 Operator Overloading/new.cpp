#include<iostream>
using namespace std;
class time
{
        int hrs;
        int min;
    public:
        time(){
            hrs = 0;
            min = 0;
        }
        time(int t)
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
    time t2;
    time t1(101);  
    t1.display();
    return 0;
}