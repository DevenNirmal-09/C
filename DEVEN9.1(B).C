#include<stdio.h>
int factorial();
int main()
{
    int a;
    a=factorial();
    printf("factorial = %d",a);
    printf("\n23DCE058 - NITYARAJ KHER");
    return 0;
}
int factorial()
{
    int n,i,factorial=1;
    printf("Enter a number = ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
