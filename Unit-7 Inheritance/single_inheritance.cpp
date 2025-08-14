// C++ program to explain Single inheritance 
#include<iostream> 
using namespace std; 

class A 
{ 
	protected: 
	int a; 

	public: 
		void input_A() 
		{ 
			cout<<"Enter the Value of A="; 
			cin>>a; 
		} 

		void display_A() 
		{ 
			cout<<endl<<"Value of A="<<a; 
		} 
};
	
class B : public A 
{ 
	protected: 
		int b; 

	public: 
		void input_B() 
		{ 
			cout<<"Enter the Value of B="; 
			cin>>b; 
		} 

		void display_B() 
		{ 
			cout<<endl<<"Value of A="<<a; 
		} 
}; 

int main() 
{ 
	B bb; 
	bb.input_A(); 
	bb.input_B(); 
	bb.display_A(); 
	bb.display_B(); 
	return 0; 
} 
