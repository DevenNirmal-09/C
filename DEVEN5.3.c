#include<stdio.h>
void main()
{
    int year;
    printf("Enter the year = ");
    scanf("%d",&year);
    if (year % 400 == 0)
    {
        printf("%d year is not leap year ",year);
    }
    else if (year % 4 == 0 || year % 100 == 0)
    {
        printf("%d year is leap year",year);
    }
    else
    {
        printf("%d year is not leap year",year);
    }
    printf("\n23DCE036 - HARSH GOSWAMI");
}
