#include<stdio.h>
#include<conio.h>
struct employee
{
    char name[15], addr[20];
    int age;
    struct salary
    {
        float sal;
    }s;
}e;

int main()
{
   printf("Enter Name : ");
   gets(e.name);
   fflush(stdin);

   printf("\nEnter Age : ");
   scanf("%d",&e.age);
   fflush(stdin);

   printf("\nEnter Address : ");
   gets(e.addr);
   fflush(stdin);
   printf("\nEnter Salary : ");
   scanf("%f",&e.s.sal);
   fflush(stdin);

   printf("\n\nEntered Details Of Employee Are As Follows : ");

   printf("\nName : ");
   puts(e.name);

   printf("Age : %d",e.age);

   printf("\nAddress : ");
   puts(e.addr);

   printf("Salary : %f",e.s.sal);

   printf("\n\n Created by 23CE079");
   return 0;
}
