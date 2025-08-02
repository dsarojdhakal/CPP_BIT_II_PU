#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    int age;
};

int main() {
    struct Student s[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
           
        printf("Enter Roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Age: ");
        scanf("%d", &s[i].age);
    }

    printf("\nStudent Information:\n");
    printf(" %-5s  %-20s  %-4s \n", "Roll", "Name", "Age");

    for (int i = 0; i < 5; i++) {
        printf(" %-50d  %-20s  %-4d \n", s[i].roll, s[i].name, s[i].age);
    }

    printf("\n\nDetails of s\n\n");
    for(int i=0;i<5;i++)
    {
        printf("Roll = %d\t",s[i].roll);
        printf("Name = %s\t",s[i].name);
        printf("Age = %d\n",s[i].age);
    }

    return 0;
}
