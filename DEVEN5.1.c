#include<stdio.h>
void main()
{
    float I,P,TP;
    printf("Enter the Items = ");
    scanf("%f",&I);
    printf("Enter the  Price per Item = ");
    scanf("%f",&P);
    TP=I*P;
    if (I>1000)
    {
        TP=TP-(TP*0.10);
        printf("Total Price = %f",TP);
    }
     else
    {
        printf("Total Price = %f",TP);
    }
    printf("\n23DCE036 - HARSH GOSWAMI");
}
