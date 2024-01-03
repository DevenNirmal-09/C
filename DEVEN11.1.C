#include <stdio.h>
#define SIZE 10
void function(int *marks, int *distinction, int *firstClass, int *pass, int *fail)
{
    for (int i = 0; i < SIZE; ++i)
    {
        if (marks[i] >= 70)
        {
            (*distinction)++;
        }
        else if (marks[i] >= 60 && marks[i] <= 69)
        {
            (*firstClass)++;
        }
        else if (marks[i] >= 40 && marks[i] <= 59)
        {
            (*pass)++;
        }
        else
        {
            (*fail)++;
        }
    }
}
int main()
{
    int marks[SIZE];
    int distinction = 0, firstClass = 0, pass = 0, fail = 0;
    printf("Enter the marks of 10 students:\n");
    for (int i = 0; i < SIZE; ++i)
    {
        scanf("%d", &marks[i]);
    }
    function(marks, &distinction, &firstClass, &pass, &fail);
    printf("DISTINCTION %d\n", distinction);
    printf("FIRST CLASS %d\n", firstClass);
    printf("PASS %d\n", pass);
    printf("FAIL %d\n", fail);
    printf("\n\n Created by 23CE079");
    return 0;
}

