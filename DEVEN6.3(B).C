#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter a number = ");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        k=n;
        while (k>i)
        {
            printf("  ");
            k--;
        }
        j=1;
        while (j<=i)
        {
            printf("%d ",j);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("Created by 23CE079");
    return 0;
}
