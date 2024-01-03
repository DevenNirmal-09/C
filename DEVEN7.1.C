#include<stdio.h>
int main()
{
    int num[25],i,p=0,N=0,E=0,O=0,a;
    printf("Enter a number = ");
    scanf("%d",&a);
    for (i=0;i<a;i++)
    {
        printf("Enter num[%d] number = ",i);
        scanf("%d",&num[i]);
    }
    for (i=0;i<a;i++)
    {
        if (num[i]>0)
        {
            p=p+1;
        }

        if (num[i]<0)
        {
            N=N+1;
        }
        if (num[i]%2==0)
        {
            E=E+1;
        }
        if (num[i]%2!=0)
        {
            O=O+1;
        }
    }
    printf("%d numbers are Positive\n",p);
    printf("%d numbers are Negative\n",N);
    printf("%d numbers are Even\n",E);
    printf("%d numbers are Odd\n",O);
    #include<stdio.h>
int main()
{
    int num[25],i,p=0,N=0,E=0,O=0,a;
    printf("Enter a number = ");
    scanf("%d",&a);
    for (i=0;i<a;i++)
    {
        printf("Enter num[%d] number = ",i);
        scanf("%d",&num[i]);
    }
    for (i=0;i<a;i++)
    {
        if (num[i]>0)
        {
            p=p+1;
        }

        if (num[i]<0)
        {
            N=N+1;
        }
        if (num[i]%2==0)
        {
            E=E+1;
        }
        if (num[i]%2!=0)
        {
            O=O+1;
        }
    }
    printf("%d numbers are Positive\n",p);
    printf("%d numbers are Negative\n",N);
    printf("%d numbers are Even\n",E);
    printf("%d numbers are Odd\n",O);
    printf("Created by 23ce079");
    return 0;
}

    return 0;
}
