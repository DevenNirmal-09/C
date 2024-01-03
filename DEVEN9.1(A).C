#include<stdio.h>
void factorial();
int  main()
{
    int a;
    factorial();
    printf("\n\nCreated by 23CE079");
    return 0;
}
void factorial()
{
    int n,i,factorial=1;
    printf("Enter a number = ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("factorial = %d ",factorial);
}
