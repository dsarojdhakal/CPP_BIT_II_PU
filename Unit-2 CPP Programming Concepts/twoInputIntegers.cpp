//write a programmme in c++ to take two inputs from user and show output as sum
/*#include<iostream>
using namespace std;

int main(){
    int num1, num2, sum;
    string mystring;
    mystring = "Hello wworld!"
    cout<<"Enter two integers: "<<endl;
    cin>>num1>>num2;
    sum = num1 + num2;
    cout<<"The sum of"<<sum<<" two integer:"<<sum<<endl;
    cout<<"The string is"<<mystring<<endl;
    return 0; 

}
*/

#include<iostream>
using namespace std;
 int main(){
    int sum[4];
   int arr1[4] = {1,2,3,4};
   int arr2[4] = {2,4,5,6};
    for(int i=0; i<4; i++){
        sum[i]=arr1[i]+arr2[i];
    }
    // display the items of sum array
    for(int i=0; i<4; i++){
        cout<<sum[i]<<" ";
    }
    return 0;



 }