#include<stdio.h>
#include<conio.h>

union library
{
    int accNum;
    char title[20];
    char author[20];
    float price;
    int flag;
}b1;

int main()
{
   printf("Enter The Accession Number : ");
   scanf("%f",&b1.accNum);
   fflush(stdin);

   printf("\nEnter Title of Book : ");
   gets(b1.title);
   fflush(stdin);

   printf("\nEnter The Name of Author : ");
   gets(b1.author);
   fflush(stdin);

   printf("\nEnter The Price of Book : ");
   scanf("%f",&b1.price);
   fflush(stdin);

L: printf("\nEnter Flag Value : ");
   scanf("%d",&b1.flag);
   fflush(stdin);

   if(b1.flag == 1)
   {
       printf("\nBook is issued");
   }

   else if(b1.flag == 0)
   {
       printf("\nBook is not issued");
   }

   else
   {
       printf("Enter valid flag value");
       goto L;
   }

   printf("\n\nCreated by 23CE079");
   return 0;
}
