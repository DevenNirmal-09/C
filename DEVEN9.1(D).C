//passed the arguments and return a value.
#include<stdio.h>

int factorial(int);
int main()
{
    int n,ans;
    printf("Enter n");
    scanf("%d",&n);
    ans=factorial(n);
    printf("Factorial is :%d",ans);
     printf("\n Created by 23CE079");
}
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
