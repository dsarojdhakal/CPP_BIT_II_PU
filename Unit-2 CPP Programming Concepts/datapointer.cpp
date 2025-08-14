#include <iostream>
 using namespace std;

int main() {
  int *ptr, var;
  var = 12;
  ptr = &var;

  cout<<"The value of var: " << var<< endl;
  cout<<"The address of value: "<<ptr<<endl;
  cout<<"The value stored in address:" <<*ptr<<endl;

  //change the value of variable var using pointer
  *ptr = 99;
  cout<<"The new value stored in address:" <<*ptr<<endl;
  return 0;
}
