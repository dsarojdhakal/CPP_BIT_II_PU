#include<iostream>
using namespace std;

class TimeClass{
    private:
        int hrs, mins;
    public:
        void getData();
        int sumTime(TimeClass, TimeClass, TimeClass);
};

void TimeClass :: getData(){
    cout<<"Enter time  in terms of hour and minutes:"<<endl;
    cout<<"Ehter hour : ";
    cin>>hrs;
    cout<<"Enter minutes : ";
    cin>>mins;
}

int TimeClass :: sumTime(TimeClass t1, TimeClass t2, TimeClass t3){
    int totalMinutes = (t1.mins + t2.mins + t3.mins);
    hrs = t1.hrs + t2.hrs + t3.hrs + totalMinutes / 60;
    mins = totalMinutes % 60;
    cout<<endl<<"The total time is "<<hrs<<" Hours and "<<mins<<" minutes."<<endl<<endl;

}
int main(){
    TimeClass t1, t2, t3,t4;
    t1.getData();  
    t2.getData();
    t3.getData();
    t4.sumTime( t1, t2, t3);
    return 0;
}