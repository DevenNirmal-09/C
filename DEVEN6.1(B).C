#include<stdio.h>
#include<math.h>
int main()
{
    int c,b,i=0,a,x,n,sum=0,cub;
    printf("Enter a number = ");
    scanf("%d",&n);
    x=n;
    c=n;
    while(c>=1)
    {
        b=c%10;
        if (b>=1)
        {
            i=i+1;
        }
        c/=10;
    }
    while(n!=0)
    {
        a=n%10;
        cub=pow(a,i);
        sum+=cub;
        n/=10;
        if (sum==x)
        {
            printf("%d number is armstrong number",x);
        }
    }
    if (sum!=x)
    {
        printf("%d number is not armstrong number ",x);
    }
    printf("\n23DCE058 - NITYARAJ KHER");
}
