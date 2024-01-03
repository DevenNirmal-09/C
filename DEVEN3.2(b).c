#include<stdio.h>
void main()
{
    int Yellow=10,Pink=20,Cal;
    printf("Before Execution Yellow = %d \nPink = %d",Yellow,Pink);
    Cal = ++Yellow + Yellow++ + --Yellow + ++Pink - --Pink - --Pink;
    printf("\nAfter Execution Yellow = %d \nPink = %d",Yellow,Pink);
    printf("\n23DCE036 - HARSH GOSWAMI");
}
