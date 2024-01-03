#include<stdio.h>
#include<ctype.h>
void main()
{
    char a;
    printf("Enter a charecter = ");
    a = getchar();
    if (isdigit(a))
    {
        putchar(a);
        printf( " is digit ");
    }
    else if (isalpha(a))
    {
        if (islower(a))
        {
            putchar(a);
            printf(" is lower\n ");
            a = toupper(a);
            putchar(a);
            printf(" is upper\n");
        }
        else if (isupper(a))
        {
            putchar(a);
            printf("is upper\n ");
            a = tolower(a);
            putchar(a);
            printf("is lower\n");
        }
    }
    else if (ispunct(a))
    {
        putchar(a);
        printf( "a is a punctuation");
    }
    else if (isspace(a))
    {
        putchar(a);
        printf(" is space");
    }
    else if (isprint(a))
    {
        putchar(a);
        printf("is print");
    }
    printf("\n23DCE058-NITYARAJ KHER");
}
