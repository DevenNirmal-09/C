#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,dis;
    float r1,r2,img;
    printf("Enter three number =  ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    dis=(b^2)-(4*a*c);
    switch(dis>0)
    {
    case 1:

            r1=(-b + sqrt(dis))/(2*a);
            r2=(-b - sqrt(dis))/(2*a);
            printf("Root 1 = %.2f \nRoot 2 = %.2f",r1,r2);
            break;

    case 0:
        switch(dis<0)
        {
        case 1:

            r1=r2=(-b)/(2*a);
            img=sqrt(-dis)/(2*a);
            printf("Root 1 = %.2f \nRoot 2 = %.2f \nimg = %.2f",r1,r2,img);
            break;

        case 0:

            r1=r2=(-b)/(2*a);
            printf("Root 1 = %.2f \nRoot 2 = %.2f",r1,r2);
            break;

        }
        break;
    }
    printf("\n23DCE036 - HARSH GOSWAMI");
}
