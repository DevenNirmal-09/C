#include<stdio.h>
void factorial(int a);
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    factorial(n);
    printf("\n23DCE058 - NITYARAJ KHER");
    return 0;
}
void factorial(int a)
{
    int i,factorial=1;
    for (i=1;i<=a;i++)
    {
        factorial=factorial*i;
    }
    printf("Factorial = %d",factorial);
}

