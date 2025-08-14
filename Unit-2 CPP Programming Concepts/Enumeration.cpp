#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday= 21, Thursday, Friday, Saturday };

int main()
{
    week today, day1 = Monday, day2 = Friday;
    today = Wednesday;
    cout << "Day : " << today<<endl ;
    cout<<"Day-1 :  "<<day1<<endl;
    cout<<"Day-2 :  "<<day2;
    return 0;
}
