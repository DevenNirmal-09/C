#include<stdio.h>
#include<conio.h>

void binary(int);

int main()
{
    int number;
l1: printf("Enter a positive number to convert to binary : ");
     scanf("%d", &number);

    if(number>0)
    {
     binary(number);
    }

    else if(number<0)
    {
     printf("Enter a positive number");
     goto l1;
    }

    else
    {
     printf("0");
    }
    printf("\n\nCreated by 23CE079");
    return 0;
}
void binary(int num)
{
    if(num==0)
    {
        return 0;
    }
    binary(num/2);
    printf("%d", num%2);
}
