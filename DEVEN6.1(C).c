#include<stdio.h>
#include<conio.h>

void main()
{
    int choice,n,i,temp=0,r,on,sum=0;
   A: printf("Enter Any Number: \n");
    scanf("%d",&n);
    printf("Enter 1 For prime or not\n");
    printf("Enter 2 For Armstrong or not\n");
    printf("Enter 3 For Perfect or not\n");
    printf("Enter 4 For Exit\n");
    scanf("%d",&choice);

    switch(choice)
    {

        do
        {
           case 1:
           for(i=2;i<=n/2;i++)
           {
            if (n%i==0)
            {
                temp++;
                break;
            }
           }

           if(temp==0 && n!=1)
           {
            printf("%d is a Prime Number\n",n);
           }
           else
           {
            printf("%d is not a Prime Number\n",n);
           }
           goto A;
           break;


           case 2:
           on=n;
            while(n>0)
            {
                r=n%10;
                sum=sum+(r*r*r);
                n=n/10;
            }

            if(on==sum)
            {
                printf("%d is A Armstrong Number\n",on);
            }
            else{
                printf("%d is Not A Armstrong Number\n",on);
            }
            goto A;
            break;


            case 3:
             for(i=1;i<n;i++)
            {
                if(n%i==0)
                {
                    sum=sum+i;
                }
            }
            if(sum==n)
            {
                printf("%d is A Perfect Number\n",n);
            }
            else{
                printf("%d is Not A Perfect Number\n",n);
            }
            goto A;
            break;


            case 4:
            break;

        }while(1);
        printf("\n23CE079-DEVEN NIRMAL");
    }
}
