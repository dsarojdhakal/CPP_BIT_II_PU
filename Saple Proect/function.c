#include<stdio.h>
void display_Name();
void display_Age();

int main()
{
    display_Name();
    printf("\nHello my name is Shyam.\n");
    display_Age();
    printf("\nI am 20 years old.\n");
    return 0;
}

void display_Age()
{   
    int age;
    printf("\nEnter your age : \n");
    scanf("%d", &age);
    printf("\nI am %d years old.\n", age);
}
void display_Name()
{
    printf("\nHello my name is Ram\n");
}
