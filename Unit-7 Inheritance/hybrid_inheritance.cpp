#include <iostream> 
using namespace std; 

class A 
{ 
	protected: 
		int a; 
	public: 
		void input_A() 
		{ 
		cout << "Enter the value of 'a' : "; 
		cin>>a; 
		} 
}; 
	
class B : public A 
{ 
	protected: 
		int b; 
	public: 
		void input_B() 
		{ 
		cout << "Enter the value of 'b' : "; 
		cin>>b; 
		} 
}; 
class C 
{ 
	protected: 
		int c; 
	public: 
		void input_C() 
		{ 
			cout << "Enter the value of c is : "; 
			cin>>c; 
		} 
}; 
	
class D : public B, public C 
{ 
	protected: 
	int d; 
	public: 
	void product() 
	{ 
		input_A(); 
		input_B(); 
		input_C(); 
		cout << "Multiplication of a,b,c is : " <<a*b*c; 
	} 
}; 


int main() 
{ 
	D dd; 
	dd.product(); 
	return 0; 
}
