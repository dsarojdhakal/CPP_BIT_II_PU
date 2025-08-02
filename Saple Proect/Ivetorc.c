#include<stdio.h>
#include<string.h>
char fname[30], lname[30], gen[30], add[30], gurd[30];
int dob, id, bedno, wardno,month,day;
FILE *ptr, *newrec,*lastrec;
void add_new();
void view();
// void remove();
void update();
void search();
void exit_func();	
main()
{
    char pass[30];
    int ch;
    printf("WELCOME TO PATIENT INFORMATION MANAGEMENT SYSTEM\n\n\n");
Abc:
    printf ("Enter Password\t");
    scanf("%s",pass);
    if(strcmp(pass,"computer")==0)
    {
        Xyz:
        system("cls");
        printf("**Menu**\n\n");
        printf("1.Add\n");
        printf("2.View\n");
        printf("3.Remove\n");
        printf("4.Update\n");
        printf("5.Search\n");
        printf("6.Exit\n");
        printf("Enter choice\n");
        scanf("%d",& ch);
        switch(ch)
        {
            case 1 :
            	system("cls");
                add_new();
                goto Xyz;
                break;				
            case 2 :
            	system("cls");
                view();
                getchar();
                goto Xyz;
                break;
            case 3:
            	system("cls");
                remove();
                goto Xyz;
                break;
            case 4:
            	system("cls");
                update();
                goto Xyz;
                break;
            case 5 :
            	system("cls");
                search();
                goto Xyz;
                break;
            case 6:
            	system("cls");
                exit_func();
                break;
            default:
            	system("cls");
                printf("Wrong Input\n");
                goto Xyz;
        }
    }
    else
    {
        printf("Wrong password\n");
        goto Abc;
    }
    getchar();
}
void add_new()
{
	int sidd,bedno1,month1,day1;
    ptr=fopen("patient.txt","a+");
	{
		aaa:
        system("cls");
        printf("enter patient id:\t");
        scanf("%d",&sidd);
        while(fscanf(ptr,"%d%d%d%s%s%s%s%d%d%d%s",&id,&month,&day, fname, lname, gen, add, &dob,&bedno, &wardno, gurd)!=EOF)
        {
        	if(sidd==id)
        	{
        		printf("THIS ID ALREADY EXISTS");
        		getchar();
        		goto aaa;
			}
		}
		id=sidd;
        printf("Enter first name:\t");
        scanf("%s", fname);
        printf("Enter last name:\t");
        scanf("%s", lname);
        printf("Enter patient gender:\t");
        scanf("%s", gen);
        printf("Enter date of birth :\t");
        scanf("%d", &dob);
		printf("\n\nEnter entry date\n");
		printf("Enter month:\t");
		scanf("%d", &month1);
        printf("Enter day:\t");
        scanf("%d", &day1);
		month=month1;
		day=day1;
		mmm:
        printf("Enter bed number:\t");
        scanf("%d", &bedno1);
		while(fscanf(ptr,"%d%d%d%s%s%s%s%d%d%d%s",&id,&month,&day,fname,lname,gen,add,&dob,&bedno,&wardno,gurd)!=EOF)
        {
        	if(bedno1==bedno&&month1==month&&day1==day)
        	{
        		printf("THIS BED IS ALREADY OCCUPIED!!!");
        		getchar();
        		goto mmm;
			}
		}
		bedno=bedno1;
        printf("Enter ward number:\t");
        scanf("%d", &wardno);
        printf("Enter patient guardian name:\t");
        scanf("%s", gurd);
		printf("Enter patient address:\t");
        scanf("%s", add);
        fprintf(ptr,"%d\t%d\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%d\t%s\n",id,month,day,fname,lname,gen,add,dob,bedno,wardno,gurd);
        printf("\n\n !!! RECORD SAVED SUCCESSFULLY!!!");
        getchar();
    }
    fclose(ptr);
}
 void view()
 {
    ptr=fopen("patient.txt","r");
    printf("Patient Information:\n\n");
    printf("%-5s %-7s %-5s %-10s %-10s %-10s %-10s %-5s %-5s %-5s %-10s", "ID", "Month", "Day","fname","lname","gen","add","dob","bedno","wardno","guard");
    while(fscanf(ptr,"%d%d%d%s%s%s%s%d%d%d%s",&id,&month,&day,fname,lname,gen,add,&dob,&bedno,&wardno,gurd)!=EOF)
    {
        printf("%d\t\t%d\t%d\t%s\t%s\t%s\t\t%s\t\t%d\t%d\t\t%d\t\t%s\n",id,month,day,fname,lname,gen,add,dob,bedno,wardno,gurd);
    }
    fclose(ptr);
}
void remove()
{
	int patient_id,test=0;
	ptr=fopen("patient.txt","r"); 
	newrec=fopen("new.txt","w");
	printf("\n Enter the patient id which you want to change\t");
	scanf("%d",&patient_id);
	while(fscanf(ptr,"%d%d%d%s%s%s%s%d%d%d%s",&id,&month,&day,fname,lname,gen,add,&dob,&bedno,&wardno,gurd)!=EOF)
	 {
	if(patient_id!=id)
	{
	fprintf(newrec,"%d\t%d\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%d\t%s\n",id,month,day,fname,lname,gen,add,dob,bedno,wardno,gurd);
    }
    else
	{
	test=1;
	printf("\nRecord remove successfully\n");
	}
	}
	fclose(ptr);
	fclose(newrec);
	remove("patient.txt");
	rename("new.txt","patient.txt");
	if (test==0)
	 {
	 	printf("Record not found!!\n");
	 }
	 getchar();
}
void update()
{
	char add1[30];
	int bedno1,pid,wardno1,option,choice,test=0;
	PQR:
		FILE*ptr,*lastrec;
		ptr=fopen("patient.txt","r");
		lastrec=fopen("new.txt","w");
		printf("\nEnter the patient id of the patient");
		scanf("%d",&pid);
		system("cls");
		while(fscanf(ptr,"%d%d%d%s%s%s%s%d%d%d%s",&id,&month,&day,fname,lname,gen,add,&dob,&bedno,&wardno,gurd)!=EOF)
		{
			if(pid==id)
			{
				test=1;
				printf("!!!Below listed information only can be changed!!!\n");
				printf("\n1. Address");
				printf("\n2. Bed Number");
				printf("\n3. Ward Number");
				scanf("%d",&choice);
				system("cls");
				if (choice==1)
				{
					printf("Enter new address of the patient: \n ");
					scanf("%s",add1);
					fprintf(lastrec,"%d\t%d\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%d\t%s\n",id,month,day,fname,lname,gen,add1,dob,bedno,wardno,gurd);
					system("cls");
					printf("changes saved!!!");
				}
				else if(choice==2)
				{
					printf("Enter new bed number of the patient");
					scanf("%d",&bedno1);
					fprintf(lastrec,"%d\t%d\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%d\t%s\n",id,month,day,fname,lname,gen,add,dob,bedno1,wardno,gurd);
					printf("changes saved!!!");
				}
				else if(choice==3)
				{
					printf("Enter new ward number of the patient");
					scanf("%d",&wardno1);
					fprintf(lastrec,"%d\t%d\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%d\t%s\n",id,month,day,fname,lname,gen,add,dob,bedno,wardno1,gurd);
					system("cls");
					printf("changes saved!!!");
				}
				else
				{
					fprintf(lastrec,"%d\t%d\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%d\t%s\n",id,month,day,fname,lname,gen,add,dob,bedno,wardno,gurd);
				}
			}
				else
				{
					fprintf(lastrec,"%d\t%d\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%d\t%s\n",id,month,day,fname,lname,gen,add,dob,bedno,wardno,gurd);
				}
	}
   			    fclose(ptr);
				fclose(lastrec);
				remove("patient.txt");
				rename("new.txt","patient.txt");
			if (test==0)
			{
				system("cls");
				printf("\n\n\t\t!!patient id not found!!");
			}
			getchar();
}
void search()
{
	 int nid,l,test;
	reenter_id:
		BBB:
			test=0;
			ptr=fopen("patient.txt","r");
		printf("\n Enter the patient id of the patient");
		scanf("%d",&nid);
			while(fscanf(ptr,"%d%d%d%s%s%s%s%d%d%d%s",&id,&month,&day,fname,lname,gen,add,&dob,&bedno,&wardno,gurd)!=EOF)
		    {
			if(nid==id)
			{
				test=1;
				system("cls");
				printf("\npatient id:%d",id);
				printf("\nName:%s%s",fname,lname);
				printf("\nGender:%s",gen);
				printf("\nEntry Month: %d Day: %d",month,day);
				printf("\nAdress:%s",add);
				printf("\nDate of birth:%d",dob);
				printf("\nBed number:%d",bedno);
				printf("\nWard number:%d",wardno);
				printf("\nGuardain name:%s",gurd);
				printf("\n\n Enter 1 to search another record:");
				scanf("%d",&l);
				switch(l)
				{
					case 1:
						goto BBB;
						default:
							break;
						
				}
				system("cls");
			}
        }
        fclose(ptr);
    if(test==0)
	{
	    system("cls");
	    printf("\t\t\t !!!STUDENT ID DOES NOT EXIST!!!");
	}
		getchar();
}
void exit_func()
{
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n");
	printf("...........!!!PROGRAM IS TERMINATING!!!.........");
}
