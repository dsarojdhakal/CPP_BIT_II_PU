// Example: 

#include<iostream> 
using namespace std; 

class A 
{ 
	protected: 
	int a; 
	
	public: 
		void setA() 
		{ 
			cout<<"Enter the Value for A : "; 
			cin>>a; 
			
		} 
		void displayA() 
		{ 
			cout<<endl<<"Value of A="<<a; 
		} 
}; 

class B: public A 
{ 
	int b,p; 
	
	public: 
		void setB() 
		{ 
			setA(); 
			cout<<"Enter the Value for B : "; 
			cin>>b; 
		} 
		
		void displayB() 
		{ 
			displayA(); 
			cout<<endl<<"Value of B="<<b; 
		} 
		
		void product() 
		{ 
			p=a*b; 
			cout<<endl<<"Product of "<<a<<" * "<<b<<" = "<<p; 
		} 
		
}; 

main() 
{ 
	B bb; 
	bb.setB(); 
	bb.product(); 
    bb.displayB();
	
	return 0; 
	
}
