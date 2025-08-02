#include<fstream>
#include<conio.h>
#include<string.h>
#include<iomanip>
#include<iostream>
#include<string.h>

using namespace std;
 //char b_n[20];
int check_exist_book(char []);

class book
{
          char book_number[30];
          char book_name[50];
          char author_name[20];
          int num_copies;
 
  public:
  	char pass[20];
  		void login()
		{
		 cout<<"***********ENTER THE PASSWORD***********"<<endl;
		 cin>>pass;
			
				if(strcmp(pass,"a123")==0)
					{
		
						cout<<"\t\t\t\t***login Sucessful***\t\t\t\n\n\n"<<endl;
						getch();
						system("cls");
						cout<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
				        cout<<"\n          *************** BOOKSHOP MANAGEMENT SYSTEM ***************                             "<<endl;
				        cout<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n"<<endl;		
 					}
				else
						{
						cout<<"\t\t\t!!!Password Wrong!!!\n"<<endl;
						getch();
						system("cls");
						login();
						}
        } 
			
        void get_book_details()
          {
          	
          	 cout<<"\nENTER DETAILS ABOUT BOOK U WANT TO PURCHASE\n";
             cout<<"\nEnter The Book Number: ";
             cin>>book_number;
             cout<<"\nEnter The Name of The Book: ";
             cin>>book_name;
             cout<<"\nEnter The Author's Name: ";
             cin>>author_name;
             cout<<"\nEnter No. Of Copies : ";
    		     cin>>num_copies;
          }
 
        void show_book()
          {
          	
             cout<<"\nBook Number: "<<book_number;
             cout<<"\nBook Name: "<<book_name;
             cout<<"\nAuthor's Name: "<<author_name;
             cout<<"\nCOPIES : "<<num_copies;
          }
          
          void update_book()
          {
             cout<<"\nBook number : "<<book_number;
             cout<<"\nUpdate Book Name : ";
             cin>>book_name;
             cout<<"\nUpdate Author's Name: ";
             cin>>author_name;
             cout<<"\nEnter No. Of Copies : ";
    		 cin>>num_copies;
          }
          
          char* getbooknumber()
          {
            return book_number;
          }
          
          void report()
          {
		  cout<<book_number<<setw(25)<<book_name<<setw(30)<<author_name<<setw(25)<<num_copies<<endl;
        } 
};        

       
 
fstream fp;
book bk;
void write_book()
{
          system("cls");
          int more_or_main;
          fp.open("bookshop.dat",ios::out|ios::app|ios::binary);
          do
          {
                    bk.get_book_details();
                    char bn[30];
                    strcpy(bn, bk.getbooknumber());
                    if(check_exist_book(bn)==1){
                      cout<<"Duplicate Book Number";
                    }
                    else{
                      fp.write((char*)&bk, sizeof(bk));
                    }
                    // fp.write((char*)&bk,sizeof(bk));
                    cout<<"\nPress 1 to add more books.";
                    cout<<"\nPress 2 to return to main menu.\n";
                    cout<<"Enter: ";
                    cin>>more_or_main;
                    system("cls");
          }while(more_or_main == 1);
          fp.close();
          
}
int check_exist_book(char n[]){
  fp.open("bookshop.dat",ios::in|ios::binary|ios::app);
          while(fp.read((char*)&bk,sizeof(bk)))
          {
                    if(strcmp(bk.getbooknumber(),n)==0)
                    {
                      int a=0;
                      return a;
                    }
                    else
                    {
                      int b =1;
                      return b;
                    }
          }
          fp.close();
}
 
void display_book(char n[])
{
          system("cls");
          cout<<"\nBOOK DETAILS\n";
          int check=0;
          fp.open("bookshop.dat",ios::in);
          while(fp.read((char*)&bk,sizeof(bk)))
          {
                    if(strcmp(bk.getbooknumber(),n)==0)
                    {
                      bk.show_book();
                      check=1;
                    }
          }
          fp.close();
          if(check==0)
                    cout<<"\n\nBook does not exist";
        getch();
}
 
void update_book()
{
          system("cls");
          char n[20];
          int found=0;
          cout<<"\n\n\tMODIFY BOOK";
          cout<<"\n\n\tEnter The book number: ";
          cin>>n;
          fp.open("bookshop.dat",ios::in|ios::out);
          while(fp.read((char*)&bk,sizeof(bk)) && found==0)
          {
                    if(strcmpi(bk.getbooknumber(),n)==0)
                    {
                               bk.show_book();
                               cout<<"\nEnter The New Details of book"<<endl;
                               bk.update_book();
                               int pos=1*sizeof(bk);
                              fp.seekp(pos,ios::cur);
                              fp.write((char*)&bk,sizeof(bk));
                              cout<<"\n\n\t Record Updated Successfully...";
                              found=1;
                    }
          }
          fp.close();
          if(found==0)
                    cout<<"\n\n Record Not Found ";
          getch();
}
 
void delete_book()
{
          system("cls");
          char n[20];
          int record=0;
          cout<<"\n\n\n\tDELETE BOOK";
          cout<<"\n\nEnter The Book's number You Want To Delete: ";
          cin>>n;
          fp.open("bookshop.dat",ios::in|ios::out);
          fstream fp2;
          fp2.open("Temp.dat",ios::out);
          fp.seekg(0,ios::beg);
          while(fp.read((char*)&bk,sizeof(bk)))
          {
                    if(strcmpi(bk.getbooknumber(),n)!=0)  
                    {
                               fp2.write((char*)&bk,sizeof(book));
                    }
                    else
                              record=1;
          }
          fp2.close();
          fp.close();
          remove("bookshop.dat");
          rename("Temp.dat","bookshop.dat");
          if(record==1)
                    cout<<"\n\n\tRecord Deleted ..";
          else
                    cout<<"\n\nRecord not found";
          getch();
}
 
void display_bookdetail()
{
          system("cls");
          fp.open("bookshop.dat",ios::in|ios::binary);
          if(!fp)
          {
                    cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
                    getch();
                    return;
          }
          cout<<"\n\n\t\tBook LIST\n\n";
          cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
          cout<<"Book Number"<<setw(20)<<"Book Name"<<setw(25)<<"Author"<<setw(25)<<"Copies"<<endl;
          cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
          while(fp.read((char*)&bk,sizeof(bk)))
          {
            bk.report();
          }
          fp.close();
          getch();
}

// bool check_book_exist(char bookNumber[])
//                   {
//                       fp.open("bookshop.dat", ios::in);
//                       if (!fp)
//                       {
//                           cout << "ERROR!!! FILE COULD NOT BE OPEN ";
//                           getch();
//                           return false;
//                       }

//                       while (fp.read((char*)&bk, sizeof(bk)))
//                       {
//                           if (strcmpi(bk.getbooknumber(), bookNumber) == 0)
//                           {
//                               fp.close();
//                               return true;
//                           }
//                       }

//                       fp.close();
//                       return false;
//                   }
 

 
 
int main()
{
//	book bk;
        bk.login();
          int option;
         for(int i=0;i<6;i++)
          {
          		system("cls");
               	cout<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
                cout<<"\n          *************** BOOKSHOP MANAGEMENT SYSTEM ***************                             "<<endl;
                cout<<"\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n"<<endl;
                cout<<"\t\t###########################################\n";
                cout<<"\n\t\t\tPress 1 to ENTRY BOOKS";
                cout<<"\n\t\t\tPress 2 to DISPLAY BOOK DETAILS";
                cout<<"\n\t\t\tPress 3 to CHECK AVAILABILITY";
                cout<<"\n\t\t\tPress 4 to UPDATE BOOKS";
                cout<<"\n\t\t\tPress 5 to DELETE BOOKS";
                cout<<"\n\t\t\tPress 6 to Exit"<<endl;
              cout<<"\n\t\t###########################################\n";
              cout<<"\n\t\tOption: ";
              cin>>option;
              switch(option)
                {
                        case 1:  
                          system("cls");
                          write_book();                                           
                          break;
                                                      
                        case 2: 
                            system("cls");
                            display_bookdetail();
                            break;
                                    
                        case 3:
                                  char num[20];
                                  system("cls");
                                  cout<<"\n\n\tPlease Enter The book No. ";
                                  cin>>num;
                                  display_book(num);
                                  break;
                                  
                        case 4: update_book();break;
                        
                        case 5: delete_book();break;
                        
                        case 6: exit(0);
                                  break;
                        default:cout<<"wrong input";
                }
     
           
          }
}