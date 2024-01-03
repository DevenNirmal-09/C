#include<stdio.h>

int main()
{
    int sa,sb,sm,temp;

    printf("Enter Size of array a :");
    scanf("%d",&sa);
    printf("Enter Size of array b :");
    scanf("%d",&sb);
    sm=sa+sb;
    int a[sa],b[sb],merge[sm],i,j;

    printf("Enter The Elementds of a : \n");
    for(i=0;i<sa;i++)
    {
        printf("Enter a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter The Elementds of b : \n");
    for(j=0;j<sb;j++)
    {
        printf("Enter b[%d] : ",j);
        scanf("%d",&b[j]);
    }

    for(i=0;i<sa;i++)
    {
        merge[i]=a[i];
    }
    for(j=0;j<sb;j++,i++)
    {
        merge[i]=b[j];
    }
    printf("Merged array is : \n");
    for(i=0;i<sm;i++)
    {
        printf("Merge[%d] : %d \n",i,merge[i]);
    }

    for(i=0;i<sm;i++)
    {
        for(j=0;j<sm;j++)
        {
            if(merge[i]<merge[j])
            {
                temp=merge[i];
                merge[i]=merge[j];
                merge[j]=temp;
            }
        }
    }
    for(i=0;i<sm;i++)
    {
        printf("\nShorted Merge[%d] = %d ",i,merge[i]);
    }

    printf("\n\nCreated by 23CE079");


}
