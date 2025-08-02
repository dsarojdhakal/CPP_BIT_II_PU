
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
using namespace std;

class book{
	public:
		int id,qn;
		string name,author;
		char pass[20];
		
// 		void login()
// 		{
// 			cout<<"***********ENTER THE PASSWORD***********"<<endl;
// 			cin>>pass;
// 				if(strcmp(pass,"a123")==0)
// 	{
		
// 		cout<<"\t\t\t\t***login Sucessful***\t\t\t\n\n\n"<<endl;
// 		getch();
// 		system("cls");
// 		cout<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
//         cout<<"\n          *************** BOOKSHOP MANAGEMENT SYSTEM ***************                             "<<endl;
//         cout<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n"<<endl;
		
// 	}
// 	else
// 	{
// 	cout<<"\t\t\t!!!Password Wrong!!!\n"<<endl;
// 	getch();
// 	system("cls");
// 	login();
// 	}
		
//   }
	  void bookdetail()
	  {
	  	cout<<"Enter Book id:"<<"\n"<<"Enter Book Name:"<<"\n"<<"Enter Author Name:"<<"\a1n"<<"Quantity of book:"<<endl;
	  	cin>>id>>name>>author>>qn;
	  }
	  
	  void display_bookdetail()
	  {
	  	cout<<"Book_id="<<id<<"\n Book_name="<<name<<"\nAuthor_name="<<author<<"\nBook_quantity="<<qn<<endl;
	  }
	  
};

int main()
{
	
//	fstream fp;
	book bk;
	//bk.login();
	int ch;
	cout<<"\t\t\t===========================================\n";
	cout<<"\t\t\t|1.|   Enter  book detail                 |\n";
	cout<<"\t\t\t|--|--------------------------------------|\n";
	cout<<"\t\t\t|2.|    Display book detail               |\n";
	cout<<"\t\t\t|--|--------------------------------------|\n";
	cout<<"\t\t\t|3.|    Update and modify book            |\n";
	cout<<"\t\t\t|--|--------------------------------------|\n";
	cout<<"\t\t\t|4.|     Enter customer detail            |\n";
	cout<<"\t\t\t|--|--------------------------------------|\n";
	cout<<"\t\t\t|5.|     check the avaibility book        |\n";
	cout<<"\t\t\t|--|--------------------------------------|\n";
	cout<<"\t\t\t|6.|    Display the customer detail       |\n";
	cout<<"\t\t\t|--|--------------------------------------|\n";
	cout<<"\t\t\t|7.|        Exit                          |\n";
	cout<<"\t\t\t|--|--------------------------------------|\n";
	cout<<"\t\t\t===========================================\n\n\n";
	cout<<"\t\t\tEnter your choice-:\t";
	cin>>ch;

switch (ch)
{
			case 1:
			{
			
				system("cls");
				ofstream onfile;
				int bnum;
				cout<<"Enter the number of book you want to add:"<<endl;
				cin>>bnum;
				onfile.open("bookshop.dat",ios::app|ios::binary);
				for(int i=0;i<bnum;i++)
				{
					bk.bookdetail();
					onfile.write((char*)&bk,sizeof(bk));
					
				}
				onfile.close();
				break;
		}
			
			case 2:
				{
				
				system("cls");
				ifstream infile;
				infile.open("bookshop.dat",ios::in|ios::binary);
				while(infile.read((char*)&bk, sizeof(bk)))
				{
					bk.display_bookdetail();
					
				}
				infile.close();
			
				 
				break;
			}
			}
					 

return 0;
}