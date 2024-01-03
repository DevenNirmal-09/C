#include<stdio.h>
#include<math.h>
float calculates(int,int,int);
float calculatea();

int main()
{
    calculatea();
}

float calculatea()
{
    int a,b,c,s;
    float Area;
    printf("Enter Valu of a,b,c :");
    scanf("%d %d %d",&a,&b,&c);
    s= calculates(a,b,c);
    Area=sqrt(s*(s-a)*(s-b)*(s-c));

    if(Area==0)
    {
        printf(" Not Forming A Triangle.\n\n");
    }else{
        printf("Forming a Triangle\n\n");
        printf("Area of Triangle is %f\n\n",Area);
    }

    printf("Created by 23CE079");
}
float calculates(int a,int b,int c)
{
    float x;
    x=(a+b+c)/2;
    return x;
}
