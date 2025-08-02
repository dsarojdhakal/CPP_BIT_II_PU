#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
#include<time.h>
void hotel();
void logsuc();
void welcome();
void login();
void sea_by_room();
void sea_by_name();
void mainmenu();
void checkin();
void checkout();
void searcusrec();
void exit();
int room=0,day=0,i;
char fname[30],lname[30],add[30],phone[20],nationality[30],date[30],co[30]="Not_Checkedout";

main()
{
    welcome();
    hotel();
    login();
}

void login()
{
	time_t t = time(NULL);
    printf("\n\t\t\t\t\t\t\t\t\t\t Current date and time is : %s", ctime(&t));
    char pw[5]="pass",pass[10];
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\tEnter Authorized Key:\t");
    scanf("%s",pass);

    if(strcmp(pw,pass)==0)
        {
        logsuc();
        printf("\t\t\t\t\t\tPress any key to continue\n");
        getch();
        system("cls");
        mainmenu();
        }

    else
    {
        printf("\t\t\t\t\t\tLogin Unsuccessful\n");
        printf("Press any key to re-enter your password\n");
        getch();
        system("cls");
        welcome();
        hotel();
        login();
    }
}

void mainmenu()
{
    int ch;
    printf("\n\n");
    hotel();
    printf("\n\n\n\n");
        printf("\t\t\t\t   ======================================\n");
        printf("\t\t\t\t  ||                                     ||\n");
        printf("\t\t\t\t  ||           WELCOME TO THE MENU       ||\n");
        printf("\t\t\t\t  ||=====================================||\n");
        printf("\t\t\t\t  ||                                     ||\n");
        printf("\t\t\t\t  ||  1. Check-in Customer               ||\n");
        printf("\t\t\t\t  ||=====================================||\n");
        printf("\t\t\t\t  ||  2. Check-out Customer              ||\n");
        printf("\t\t\t\t  ||=====================================||\n");
        printf("\t\t\t\t  ||  3. Search Customer Record          ||\n");
        printf("\t\t\t\t  ||=====================================||\n");
        printf("\t\t\t\t  ||  4. Exit                            ||\n");
        printf("\t\t\t\t  ||=====================================||\n");
        printf("\t\t\t\t  ||                                     ||\n");
        printf("\t\t\t\t  ||        Please enter your choice:    ||\n");
        printf("\t\t\t\t  ||=====================================||\n");
        printf("\t\t\t\t\t");
    scanf("%d",&ch);

    switch (ch)
    {
        case 1:
            system("cls");
            checkin();
            break;
        case 2:
            checkout();
            break;
        case 3:
            system("cls");
            searcusrec();
            break;
        case 4:
            break;
        default:
            printf("Wrong choice\n");
            printf("Enter any key to continue\n");
            getch();
            system("cls");
            mainmenu();
    }
}



void logsuc()
{
    printf("\t\t\t\t\t\t  _                 _                                          __       _ \n");
    printf("\t\t\t\t\t\t | |               (_)                                        / _|     | |\n");
    printf("\t\t\t\t\t\t | |     ___   __ _ _ _ __    ___ _   _  ___ ___ ___  ___ ___| |_ _   _| |\n");
    printf("\t\t\t\t\t\t | |    / _ \\ / _` | | '_ \\  / __| | | |/ __/ __/ _ \\/ __/ __|  _| | | | |\n");
    printf("\t\t\t\t\t\t | |___| (_) | (_| | | | | | \\__ \\ |_| | (_| (_|  __/\\__ \\__ \\ | | |_| | |\n");
    printf("\t\t\t\t\t\t |______\\___/ \\__, |_|_| |_| |___/\\__,_|\\___\\___\\___||___/___/_|  \\__,_|_|\n");
    printf("\t\t\t\t\t\t               __/ |                                                      \n");
    printf("\t\t\t\t\t\t              |___/                                                       \n");
}



void welcome()
{
    printf("\t\t\t\t\t\t\t\t\t __          __  _                            _______    \n");
    printf("\t\t\t\t\t\t\t\t\t \\ \\        / / | |                          |__   __|   \n");
    printf("\t\t\t\t\t\t\t\t\t  \\ \\  /\\  / /__| | ___ ___  _ __ ___   ___     | | ___  \n");
    printf("\t\t\t\t\t\t\t\t\t   \\ \\/  \\/ / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\    | |/ _ \\ \n");
    printf("\t\t\t\t\t\t\t\t\t    \\  /\\  /  __/ | (_| (_) | | | | | |  __/    | | (_) |\n");
    printf("\t\t\t\t\t\t\t\t\t     \\/  \\/ \\___|_|\\___\\___/|_| |_| |_|\\___|    |_|\\___/ \n");
   
}


void hotel()
{
    printf("\t\t\t\t\t  _    _       _       _                                             _       _   _                _____           _                 \n");
    printf("\t\t\t\t\t | |  | |     | |     | |     /\\                                    | |     | | (_)              / ____|         | |                \n");
    printf("\t\t\t\t\t | |__| | ___ | |_ ___| |    /  \\   ___ ___ ___  _ __ ___   ___   __| | __ _| |_ _  ___  _ __   | (___  _   _ ___| |_ ___ _ __ ___  \n");
    printf("\t\t\t\t\t |  __  |/ _ \\| __/ _ \\ |   / /\\ \\ / __/ __/ _ \\| '_ ` _ \\ / _ \\ / _` |/ _` | __| |/ _ \\| '_ \\   \\___ \\| | | / __| __/ _ \\ '_ ` _ \\ \n");
    printf("\t\t\t\t\t | |  | | (_) | ||  __/ |  / ____ \\ (_| (_| (_) | | | | | | (_) | (_| | (_| | |_| | (_) | | | |  ____) | |_| \\__ \\ ||  __/ | | | | |\n");
    printf("\t\t\t\t\t |_|  |_|\\___/ \\__\\___|_| /_/    \\_\\___\\___\\___/|_| |_| |_|\\___/ \\__,_|\\__,_|\\__|_|\\___/|_| |_| |_____/ \\__, |___/\\__\\___|_| |_| |_|\n");
    printf("\t\t\t\t\t                                                                                                         __/ |                      \n");
    printf("\t\t\t\t\t                                                                                                        |___/                       \n");
}


void checkin()
{
	int c;
    system("cls");
    hotel();
	time_t t = time(NULL);
    printf("\n\t\t\t\t\t\t\t\t\t\t Current date and time is : %s", ctime(&t));
    int r;
    FILE *fp;
    fp=fopen("customer.txt","a+");
    if(fp==NULL)
    {
        system("cls");
        printf("Please hold on while we set our database in your computer!!\n");
        printf("Process completed press any key to continue!! ");
        mainmenu();
        getch();
    }

    else
    {
        int r,c,len;
        char d[30],ch;
        while(fscanf(fp,"\n%s\t%d\t%s\t%s\t%s\t%s\t%s\t%d\t%s\t%s",date,&room,fname,lname,add,&phone,nationality,&day,co)!=EOF) 
        {
            for(i=1;i<=100;i++)
            {
                if(i==room&&strcmp(co,"Not_Checkedout")==0)
                {
                    printf("Booked!\t");
                }
                else
                {
                    printf("%d\t",i);
                }
            }
        }
        printf("\nArrival date(dd/mm/yyyy):\t");
        scanf("%s",date);
        printf("Room Number:\t");
        scanf("%d",&room);
        printf("\nFirst name of the guest:\t");
        scanf("%s",fname);
        printf("\nLast name of the guest:\t");
        scanf("%s",lname);
        printf("\nAddress:\t");
        scanf("%s",add);
        printf("\nPhone number:\t");
        scanf("%s",&phone);
        printf("\nNationality:\t");
        scanf("%s",nationality);
        printf("\nDays (/xdays/):\t");
        scanf("%d",&day);
        fprintf(fp,"\n%s\t%d\t%s\t%s\t%s\t%s\t%s\t%d\t%s\t",date,room,fname,lname,add,phone,nationality,day,co);
        printf("Room is successfully booked!!!!!!!");
        printf("Press any key to continue\n");
        fclose(fp);
        getch();
        system("cls");
        mainmenu();
    }
}


void checkout()
{
    system("cls");
    hotel();
    time_t t = time(NULL);
    printf("\n\t\t\t\t\t\t\t\t\t\t Current date and time is : %s", ctime(&t));
    FILE *fp,*file;
    fp=fopen("customer.txt","r");
    file=fopen("guest.txt","a");
    int c,r;
    char f[30],l[30];
    printf("Room number:\t");
    scanf("%d",&r);
    printf("\nFirst name of the guest:\t");
    scanf("%s",&f);
    printf("Last name of the guest\t:");
    scanf("%s",&l);
    while(fscanf(fp,"\n%s\t%d\t%s\t%s\t%s\t%s\t%s\t%d\t%s\t",date,&room,fname,lname,add,&phone,nationality,&day)!=EOF)
    {
        if(r==room&&strcmp(f,fname)==0&&strcmp(l,lname)==0)
        {
            printf("Checkout date (dd/mm/yyyy):\t");
            scanf("%s",co);
            fprintf(file,"\n%s\t%d\t%s\t%s\t%s\t%s\t%s\t%d\t%s\t",date,room,fname,lname,add,phone,nationality,day,co);
        }

        else
        {
            fprintf(file,"\n%s\t%d\t%s\t%s\t%s\t%s\t%s\t%d\t%s\t",date,room,fname,lname,add,phone,nationality,day,co);
        }
    }

    fclose(fp);
    fclose(file);
    remove("customer.txt");
    rename("guest.txt","customer.txt");
    printf("Press any key to continue\n");
    getch();
    system("cls");
    mainmenu();
}


void searcusrec()
{
int a;
system("cls");
	time_t t = time(NULL);
    printf("\n\t\t\t\t\t\t\t\t\t\t Current date and time is : %s", ctime(&t));
    printf("\t\t\t\t  ||=====================================||\n");
    printf("\t\t\t\t  ||  1. Search by name                  ||\n");
    printf("\t\t\t\t  ||=====================================||\n");
    printf("\t\t\t\t  ||  2. Search by room number           ||\n");
    printf("\t\t\t\t  ||=====================================||\n");
    printf("\t\t\t\t  ||                                     ||\n");
    printf("\t\t\t\t  ||     Please enter your choice:       ||\n");
    printf("\t\t\t\t  ||=====================================||\n");
    printf("\t\t\t\t\t");
scanf("%d",&a);
switch(a)
{
    case 1:
        sea_by_name();
        break;
    case 2:
        sea_by_room();
        break;
    default:
        printf("Wrong choice\n");
        searcusrec();
}
}


void sea_by_room()
{
    system("cls");
    hotel();
    time_t t = time(NULL);
    printf("\n\t\t\t\t\t\t\t\t\t\t Current date and time is : %s", ctime(&t));
    FILE *fp;
    fp=fopen("customer.txt","r");
    if(fp==NULL)
    {
        system("cls");
        printf("Please hold on while we set our database in your computer!!\n");
        printf("Process completed press any key to continue!! ");
        mainmenu();
        getch();
    }

    else
    {
        int r,c;
        printf("Room Number:\t");
        scanf("%d",&r);
        while(fscanf(fp,"\n%s\t%d\t%s\t%s\t%s\t%s\t%s\t%d\t%s\n",date,&room,fname,lname,add,&phone,nationality,&day,co)!=EOF)
        {
            if(r==room)
            {
                printf("Room Number:%d\t",room);
                printf("\nFirst name of the guest:%s\t",fname);
                printf("\nLast name of the guest:%s\t",lname);
                printf("\nAddress:%s\t",add);
                printf("\nPhone number:%s\t",phone);
                printf("\nNationality:%s\t",nationality);
                printf("\nDays (/xdays/):%d\t",day);
                printf("\nArrival date(dd/mm/yyyy format):%s\t",date);
                printf("\nCheckout date:%s\n\n",co);
                printf("\nPress any key to continue\n");
                fclose(fp);
                getch();
                system("cls");
                mainmenu();
            }


            else
            {
                c=1;
            }
        }

        if(c==1)
        {
            printf("No details found of this room number\n");
            fclose(fp);
            printf("Press any key to continue\n");
            getch();
            system("cls");
            mainmenu();
        }
    }
}




void exit()
{
    exit();
}



void sea_by_name()
{
    system("cls");
    void hotel();
    FILE *fp;
    fp=fopen("customer.txt","r");
    if(fp==NULL)
    {
        system("cls");
        printf("Please hold on while we set our database in your computer!!\n");
        printf("Process completed press any key to continue!! ");
        mainmenu();
        getch();
    }
    else
    {
        int c;
        char f[30],l[30];
        printf("\nFirst name of the guest:\t");
        scanf("%s",&f);
        printf("\nLast name of the guest:\t");
        scanf("%s",&l);
        while(fscanf(fp,"\n%s\t%d\t%s\t%s\t%s\t%s\t%s\t%d\t%s\n",date,&room,fname,lname,add,&phone,nationality,&day,co)!=EOF)
        {
            if(strcmp(f,fname)==0&&strcmp(l,lname)==0)
            {
                printf("Room Number:%d\t",room);
                system("cls");
                printf("\nFirst name of the customer:%s\t",fname);
                printf("\nLast name of the customer:%s\t",lname);
                printf("\nAddress:%s\t",add);
                printf("\nPhone number:%s\t",phone);
                printf("\nNationality:%s\t",nationality);
                printf("\nDays (/xdays/):%d\t",day);
                printf("\nArrival date(dd/mm/yyyy format):%s\t",date);
                printf("\nCheckout date:%s\n",co);
                fclose(fp);
                printf("Press any key to continue\n");
                getch();
                system("cls");
                mainmenu();
            }
            
            else
            {
            c=1;
            }
        }
        printf("No details found of this name\n");
        fclose(fp);
        printf("Press any key to continue\n");
        getch();
        system("cls");
        mainmenu();
    }
}

