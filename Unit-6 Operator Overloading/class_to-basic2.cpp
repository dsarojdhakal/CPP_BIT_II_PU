#include<iostream>
using namespace std;

class Tclass
{
        int hrs;
        int min;
    public:
        Tclass(){}
        Tclass(int t)
        {
            hrs = t/60;
            min = t%60;
        } 
        int add(){
            hrs = hrs + 2;
            return hrs;
        }
        void display()
        {
            cout<<"Hours = "<<hrs<<"\nMinutes = "<<min;
        }
};
int main()
{   
    int x, y;
    cout<<"Enter the total Tclass in minutes: ";
    cin>>x;
    Tclass t1(x); 
    t1.display();
    y = t1.add();
    cout<<"\nThe total hours after addition = "<<y<<endl;
    return 0;
}